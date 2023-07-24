#0x1B. C - Sorting algorithms & Big O
<div class="panel-body">
    <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png" /><br />
<br /></p>

<h2>Background Context</h2>

<p>This project is meant to be done by groups of two students. Each group of two should <a href="/rltoken/gIcHRL9I7i1lw2CTAll37A" title="pair program" target="_blank">pair program</a> for at least the mandatory part.</p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/-j5MKLBlzZAC2RfJ5DTBIg" title="Sorting algorithm" target="_blank">Sorting algorithm</a> </li>
<li><a href="/rltoken/WRvrE2BaNVQFssHiUATTrw" title="Big O notation" target="_blank">Big O notation</a> </li>
<li><a href="/rltoken/ol0P7NbYVb5R31iOv4Q40A" title="Sorting algorithms animations" target="_blank">Sorting algorithms animations</a> </li>
<li><a href="/rltoken/_I0aEvhfJ66Xyob6dd9Utw" title="15 sorting algorithms in 6 minutes" target="_blank">15 sorting algorithms in 6 minutes</a> (<em><b>WARNING</b>: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms</em>)</li>
<li><a href="/rltoken/Ea93HeEYuNkOL7sGb6zzGg" title="CS50 Algorithms explanation in detail by David Malan" target="_blank">CS50 Algorithms explanation in detail by David Malan</a></li>
<li><a href="/rltoken/21X_eaj5RGcLIL9mZv2sqw" title="All about sorting algorithms" target="_blank">All about sorting algorithms</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/b-QhraVUoSGmQ1C4QfNoFw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like <em>printf, puts, &hellip;</em> is totally forbidden.</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>sort.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>A list/array does not need to be sorted if its size is less than 2.</li>
</ul>

<h3>GitHub</h3>

<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>

<h2>More Info</h2>

<h3>Data Structure and Functions</h3>

<ul>
<li>For this project you are given the following <code>print_array</code>, and <code>print_list</code> functions:</li>
</ul>

<pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, array[i]);
        ++i;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<pre><code>#include &lt;stdio.h&gt;
#include &quot;sort.h&quot;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, list-&gt;n);
        ++i;
        list = list-&gt;next;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<ul>
<li>Our files <code>print_array.c</code> and <code>print_list.c</code> (containing the <code>print_array</code> and <code>print_list</code> functions) will be compiled with your functions during the correction.</li>
<li>Please declare the prototype of the functions <code>print_array</code> and <code>print_list</code> in your <code>sort.h</code> header file</li>
<li>Please use the following data structure for doubly linked list:</li>
</ul>

<pre><code>/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
</code></pre>

<p>Please, note this format is used for Quiz and Task questions.</p>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
<li>n + k -&gt; <code>O(n+k)</code></li>
<li>&hellip;</li>
</ul>

<p>Please use the &ldquo;short&rdquo; notation (don&rsquo;t use constants). Example: <code>O(nk)</code> or <code>O(wn)</code> should be written <code>O(n)</code>.
If an answer is required within a file, all your answers files must have a newline at the end.</p>

<h3>Tests</h3>

<p>Here is a quick tip to help you test your sorting algorithms with big sets of random integers: <a href="/rltoken/YR-VWQbICB59wZs1eAaI3w" title="Random.org" target="_blank">Random.org</a></p>

  </div>
</div>


      

        <div class="panel panel-default" id="project-quiz-questions-title">
    <div class="panel-heading">
      <h3 class="panel-title">
        Quiz questions
      </h3>
    </div>

    <div class="panel-body">
