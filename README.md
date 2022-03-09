# Javel
Javel is a HTTP server framework, making the usage of routes easier.

## Making a Javel instance
To make your Javel HTTP server, declaring a variable as: `myInstace = javel{port: 8080}`.

You will then be able to launch the instace after declaring its routes by using `myInstace.launch()`.

## Routes
To setup your Javel routes, add every route to the `.routes` member of your instance:
```bah
j.routes = []javel_route{   
    //static files
    javel_route{
        path: "/static/"
        base: "pages"
        handle: javel_serveFile
    },
    //html files
    javel_route{
        path: "/"
        base: "pages"
        handle: javel_serveHTML
    }
}
```

`javel_route`:
- `path` *cpstring*: The path as the URL of the route. *If the pass ends with a slash, it will be treated as a directory.*
- `base` *cpstring*: Used by the Javel's default handles as the base of the files to serve, on disk.
- `handle` *function(javel_route\*, http_request, http_response)*: The function to call on every request for this route.
- `error` *function(javel_route\*, cpstring, int, http_request, http_response)*: The function that will be called when receiving an error when handling the route (such as 404 file not found...).
- `events` *function(javel_route\*, cpstring, javel_eventStream, http_request, http_response)*: The function that will send events to the clients. (When a \<javel>\</javel> element is initiated in your paged served by javel_serveHTML, the client will start to listen for events such as "reload".)

## Default handles
Routes can be declared with Javel's default handles such as:
- `javel_serveFile`: Used for efficiently serving files (pages, images, videos...),
- `javel_serveHTML`: Used for parsing HTML templates, bundling Javel's JS runtime and serving your HTML file.

## Wrappers
Javel comes with wrappers, made for easier handling of request and sending their response.

When handling a route, you can use the following wrappers:
- `javel_eventStream{response: myHttpResponse}`: To make an event stream, use `.send(myData)` to send data as JSON to the client.
- `javel_jsonForm{request: myHttpRequest response: myHttpResponse}`: To parse a form as JSON, making scanning to a variable data sent by the client easier. You can use `.parseForm()` to parse the form, `.scan(myVariable)` to scan the form to a variable and `.send(myData)` to send a response as JSON to the client.

## HTML templating
If your Javel route uses the javel_serveHTML handle, you will be able to use both Javel's JS runtime
but also HTML templating!

> Called functions must respect the **Bah evaluation engine** (eval.bah) guidelines.
```html
<html lang="en">
<head>
    <title>Hi</title>
</head>
<body>
    My function result: <% myFunction() %>
</body>
</html>
```

In the example above, we are calling the function `myFunction()` and adding its result to the html.

To be able to call `myFunction()`, make sure:
- your function exists inside your Bah code,
- your function is evaluable by using `#eval myFunction` in your Bah code after declaring it,
- you pass it the correct arguments,
- your function returns a cpstring.

## HTML \<javel>
The HTML \<javel> element is used to include another HTML file. It will listen for events of the route.