<html>
<head><title>XO</title></head>
<style>
    fieldset{border-color:gray;background-color:white;}
    input{background-color:white;}
</style>
<body>
<fieldset>
        <input type="button" value="" id="hello"/>
</fieldset>
<script type="text/javascript" src="https://code.jquery.com/jquery-2.2.4.min.js"></script>
        <script>
            $(function(){
                $('#hello').click(function(){
                    $('#hello').val()='wow';
                });
            });
        </script>
     </body>
</html>