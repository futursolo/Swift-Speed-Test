
var max_num = 1000000;

var start_time = Date.now() / 1000;

console.log("Node.js Prime Calculator, max_num = " + max_num + ".");

var num_list = [];

var max_value = 0;

for (var i = 0; i < max_num; i++) {
	num_list.push(1);
}

for (var i = 2; i < Math.round(Math.sqrt(max_num)) + 1; i++) {
	if (num_list[i] !== 0) {
		var current = i * 2;
		while (current < max_num) {
			num_list[current] = 0;
			current += i;
		}
	}
}

for (var i = 0; i < max_num; i++) {
	if (num_list[i] !== 0) {
		max_value = i;
	}
}

var finish_time = Date.now() / 1000;
console.log("Finished! Max Value is " + max_value + ", Used Time is " + (finish_time - start_time));
