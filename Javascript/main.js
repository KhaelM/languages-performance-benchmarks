let INT_MIN = -2147483648;
let INT_MAX = 2147483647;
console.log(`INT_MIN = ${INT_MIN}`);
console.log(`INT_MAX = ${INT_MAX}`);

console.time(`benchmark`);
for (let i = INT_MIN; i < INT_MAX; i++) {
}
console.timeEnd(`benchmark`);