
    function input(value) {
        document.getElementById('result').value += value;
    }

    function clearResult() {
        document.getElementById('result').value = '';
    }

  function result(){
     var result = document.getElementById('result').value;
    document.getElementById('result').value = eval(result);
  }