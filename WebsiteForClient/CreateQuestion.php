
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8" />
	<title>ListApp</title>
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1" />
	<meta name="apple-mobile-web-app-capable" content="yes" />
	<meta name="apple-mobile-web-app-status-bar-style" content="black" />

<link rel="stylesheet" href="http://code.jquery.com/mobile/1.3.0/jquery.mobile-1.3.0.min.css" />
<script src="http://code.jquery.com/jquery-1.8.2.min.js"></script>
<script src="http://code.jquery.com/mobile/1.3.0/jquery.mobile-1.3.0.min.js"></script>

	<style>
	
	
	
    #home {
      background: url(images/photobackground.jpg) no-repeat center center fixed; 
      -webkit-background-size: cover;
      -moz-background-size: cover;
      -o-background-size: cover;
      background-size: cover;
      filter:alpha(opacity=50);
    }

    #home article {
      background: rgba(0,0,0,.7);
		  width: 50%;
		  margin: 0 auto;
		  margin-top: 100px;
      border-radius: 20px;
      color: white;
      font-weight: lighter;
      text-shadow: none;
    }
    
		#home article h1, #home article p {
			margin: 0;
			padding:5px;
		}
		
		#home article h1 {
			padding-bottom: 10px;
			color: #29A198;
		}

		img.fullscreen {
			max-height: 100%;
			max-width: 100%;
		}
	</style>
</head>
<body>


<div data-role="page" id="photos">
	<header data-role="header">
		<h1>Questionnaire Creator</h1>
	</header>
	<article data-role="content">
		
		<ul data-role="listview" >
      <li>
        <label for="basic">Questionnaire ID:</label>
    <input type="number" name="name" id="basic" value=""  />
      </li>
	  
	  <li>
        <label for="basic">Questionnaire Category:</label>
    <input type="text" name="name" id="basic" value=""  />
      </li>
	  
	  <li>
        <label for="basic">Questionnaire Name:</label>
    <input type="text" name="name" id="basic" value=""  />
      </li>
	  
	  <li>
        <label for="basic">Questionnaire Description:</label>
    <input type="text" name="name" id="basic" value=""  />
      </li>
	  
	  
	  
	  <li>
       
    <div data-role="fieldcontain">
	<label for="select-choice-1" class="select">Questionnaire Type:</label>
	<select name="select-choice-1" id="select-choice-1">
		<option value="standard">Multiple Choice</option>
		<option value="rush">Text</option>
		<option value="express">scale</option>
	</select>
</div>
      </li>
	  
	  
	  
	  <li>
        	
<div data-role="fieldcontain">
<label for="textarea">Questionnaire Text:</label>
	<textarea name="textarea" id="textarea"></textarea>
</div>

      </li>
	  <a href="index.html" data-role="button" data-icon="plus" data-mini="true">Create Question</a> 
	  
	  </ul>
		
		
		
	</article>
	<footer data-role="footer" data-position="fixed">
		<nav data-role="navbar">
			<ul>
				<li><a href="Mmenu.html" data-icon="back">Back</a></li>
				<li><a href="Login.html" data-icon="home">Logout</a></li>
				
			</ul>
		</nav>
	</footer>
</div>



</body>
</html>