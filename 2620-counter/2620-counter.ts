function createCounter(n: number): () => number {
    let counterValue:number = n;
    return () => counterValue++;
}