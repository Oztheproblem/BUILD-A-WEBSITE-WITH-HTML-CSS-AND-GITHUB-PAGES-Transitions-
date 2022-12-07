/* Universal Styles */

html {
  font-size: 16px;
}

body {
  min-width: 475px;
  font-family: "Cormorant Garamond", serif;
}

@media only screen and (max-width: 810px) {
  html {
    font-size: 14px;
  }
}


@media only screen and (max-width: 540px) {
  html {
    font-size: 12px;
  }
}

/* Navigation Bar */

nav {
 transition: fixed;
  position: fixed;
  z-index: 5;
  left: -17.8em;
  display: flex;
  align-items: center;
  height: 100%;
  padding-left: 5rem;
  padding-right: 2rem;
  background: url("https://content.codecademy.com/courses/freelance-1/unit-6/nav_background.png") center center repeat;
  font-family: "Proza Libre", serif;
  font-size: 18px;
  line-height: 2.2;
  font-weight: bold;
  color: #142033;

}

nav:hover {
  left: 0;
}

nav .hover-content {
  margin-right: 3em;
}

nav h2 {
  font-family: "Cormorant Garamond", serif;
  font-size: 2.6em;
  font-weight: bold;
  color: #639eff;
}

nav h3 {
  padding-bottom: 1.1em;
}

nav ol {
  list-style: upper-roman outside;
}

nav a {
 transition: margin-right 350ms ease-in-out;
 text-decoration: none;
 color: orange;
 

}

nav a:hover,
nav a.active {
  color: #639eff;
}

/* Header */

header {
  padding: 3.125rem 13rem;
  background-color: #142033;
  text-align: center;
  font-weight: bold;
  line-height: 2.1;
  color: #b3d0ff;
}

header h1 {
  font-size: 6rem;
  line-height: 1;
  font-weight: 500;
  color: #66a1ff;
}

header em {
  font-size: 1.5rem;
  font-style: italic;
}

header h2 {
  font-size: 3rem;
}

@media only screen and (max-width: 810px) {
  header {
    padding: 3.125rem 8rem 3.125rem 10rem;
  }

  header h1 {
    font-size: 4rem;
  }

  header h2 {
    font-size: 2rem;
  }
}

/* Book Content */

.book-content {
  padding: 4.75rem 20%;
  background-color: #f2f7ff;
  font-family: "Proza Libre", sans-serif;
  font-size: 1.5rem;
  line-height: 2;
  color: #4a4a4a;
  cursor: default;
}

.book-content h3 {
  text-align: center;
  font-size: 3rem;
  line-height: 2.1;
  font-weight: bold;
  color: #142033;
}

.chapter {
  color: #639eff;
}

.chapter .number {
  display: block;
  font-size: 1.25rem;
}

.chapter .name {
  display: block;
  font-size: 2.25rem;
}

.book-content .prose {
  margin-bottom: 4.75rem;
}

@media only screen and (max-width: 810px) {
  .book-content {
    padding-right: 10%;
  }
}

@media only screen and (max-width: 540px) {
  .book-content {
    padding-right: 1%;
  }
}

/* Word Definitions */

.definable {
  display: inline;
}

.definable .word {
  
  transition: ease-in-out;color: #639eff;

}

.definable .word:hover {
  color: #306acc;
}

.definable .definition-container {
  transition: margin-right 2s ease-in-out;
  position: fixed;
  z-index: 10;
  top: -100%;
  left: 0;
  box-sizing: border-box;
  width: 100%;
  padding: 0.5rem 4rem 2rem 4rem;
  background-color: #ffffff;
  box-shadow: 0 0 64px 0 rgba(0, 0, 0, 0.2);
  opacity: 0;
  font-family: "Proza Libre", sans-serif;
  font-size: 1.5rem;

}

.definable:hover .definition-container {
  top: 0;
  opacity: 1;
}

.definition-container h4 {
  font-family: "Cormorant Garamond", serif;
  font-size: 3rem;
  font-weight: bold;
  line-height: 2.1;
  color: #66a1ff;
}

.definition-container .information {
  display: block;
  line-height: 2.5;
  color: #9b9b9b;
}

.definition-container .definitions {
  list-style: inside decimal;
  line-height: 1.7;
  color: #4a4a4a;
}

/* Chapter Navigation Buttons */

.navigation-buttons {
  display: flex;
  justify-content: space-between;
  align-items: center;
}

.button {
  transition: opacity;
  display: inline-flex;
  justify-content: space-between;
  align-items: center;
  width: 13rem;
  padding: 0 2rem;
  background-color: #639eff;
  opacity: 0.6;
  font-size: 3rem;
  font-weight: bold;
  text-decoration: none;
  color: orange;
  border: solid red;

}

.button:hover {
  opacity: 1;
 border: dashed orange;
}

@media only screen and (max-width: 930px) {
  .button {
    width: auto;
    padding: 1rem 2rem;
  }

  .button .action {
    display: none;
  }
}
