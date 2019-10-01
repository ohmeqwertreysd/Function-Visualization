#pragma once
//#include <vld.h>
#include <utility> // для pair
#include <vector>
#include <string>
#include "mathparser.h"
#include "tabl.h"

namespace FunctionTabulationWinAPI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;







	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::CheckBox^ checkBox2;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::StripLine^ stripLine2 = (gcnew System::Windows::Forms::DataVisualization::Charting::StripLine());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->button1->Location = System::Drawing::Point(400, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 28);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label1->Location = System::Drawing::Point(81, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Function y(x)";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(11, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::TextBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(322, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::TextBox2_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label2->Location = System::Drawing::Point(303, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"a";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(322, 53);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::TextBox3_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label3->Location = System::Drawing::Point(303, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"b";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(443, 40);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::TextBox4_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label4->Location = System::Drawing::Point(423, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"dx";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label5->Location = System::Drawing::Point(243, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Interval:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label6->Location = System::Drawing::Point(381, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Step:";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label7->Location = System::Drawing::Point(150, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"The result of the calculation";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackColor = System::Drawing::SystemColors::Control;
			chartArea2->Area3DStyle->WallWidth = 1;
			chartArea2->AxisX->LabelStyle->Interval = 0;
			chartArea2->AxisX->LabelStyle->IntervalOffset = 0;
			chartArea2->AxisX->LineWidth = 2;
			chartArea2->AxisX->StripLines->Add(stripLine2);
			chartArea2->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea2->AxisY->LabelStyle->Interval = 0;
			chartArea2->AxisY->LabelStyle->IntervalOffset = 0;
			chartArea2->AxisY->LineWidth = 2;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->BackColor = System::Drawing::SystemColors::Control;
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(502, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(840, 587);
			this->chart1->TabIndex = 17;
			this->chart1->Text = L"chart1";
			title2->Alignment = System::Drawing::ContentAlignment::TopCenter;
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"Graph of the functions";
			this->chart1->Titles->Add(title2);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->checkBox1->Location = System::Drawing::Point(322, 155);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(204, 36);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Do not clear the schedule.\r\n(Unchecking deletes all data.)";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox1_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->tabControl1->Location = System::Drawing::Point(12, 234);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(484, 365);
			this->tabControl1->TabIndex = 12;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(322, 129);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(84, 20);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->Text = L"3D Graph";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox2_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1354, 611);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(1070, 430);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tabulation";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Замена подстрок в строке
	private: std::string replaceString(std::string subject, const std::string& search, const std::string& replace)
	{
		size_t pos = 0;
		while ((pos = subject.find(search, pos)) != std::string::npos)
		{
			subject.replace(pos, search.length(), replace);
			pos += replace.length();
		}
		return subject;
	}

		   // Преобразование System::String в std::string
	private: void marshalString(System::String^ s, std::string& os)
	{
		using namespace System::Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(System::IntPtr((void*)chars));
	}

		   // Поиск уже существующих функций для переименования новой
	private: System::String^ searchFunction()
	{
		int count = 0;
		std::string search;
		marshalString(textBox1->Text, search);
		for (int i = 0; i < tabControl1->TabPages->Count; i++)
		{
			std::string subject;
			marshalString(tabControl1->TabPages[i]->Text, subject);
			if (subject.find(search) != std::string::npos)
				count++;
		}
		// если такая функция уже есть, то дать ей индекс
		return (count > 0) ? textBox1->Text + "(" + Convert::ToString(count) + ")" : textBox1->Text;
	}

	private: double _a;
	private: double _b;
	private: double _dx;

	private: bool firstStart = true; // Для удаления элементов, которые были при запуске формы

		   // Проверка корректности границ a,b
	private: bool validationСheck()
	{
		std::string a;
		marshalString(textBox2->Text, a);
		a = replaceString(a, ",", ".");
		std::string b;
		marshalString(textBox3->Text, b);
		b = replaceString(b, ",", ".");
		std::string dx;
		marshalString(textBox4->Text, dx);
		dx = replaceString(dx, ",", ".");

		if (std::stod(a) > std::stod(b))
		{
			MessageBox::Show("a > b", "Error", MessageBoxButtons::OK);
			return false;
		}
		else if (std::stod(a) + std::stod(dx) > std::stod(b))
		{
			MessageBox::Show("a+dx > b", "Error", MessageBoxButtons::OK);
			return false;
		}

		this->_a = std::stod(a);
		this->_b = std::stod(b);
		this->_dx = std::stod(dx);

		return true;
	}

		   // Создание нового DataGridView
	private: System::Windows::Forms::DataGridView^ createDataGridView(std::vector<std::pair<double, double>> row)
	{
		// Столбец X
		System::Windows::Forms::DataGridViewTextBoxColumn^ Col1 = gcnew System::Windows::Forms::DataGridViewTextBoxColumn;
		Col1->Frozen = true;
		Col1->HeaderText = L"X";
		Col1->Name = L"Column1";
		Col1->Width = (tabControl1->ClientSize.Width - 10) / 2;
		Col1->ReadOnly = true;
		Col1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;

		// Столбец Y
		System::Windows::Forms::DataGridViewTextBoxColumn^ Col2 = gcnew System::Windows::Forms::DataGridViewTextBoxColumn;
		Col2->Frozen = true;
		Col2->HeaderText = L"Y";
		Col2->Name = L"Column2";
		Col2->Width = (tabControl1->ClientSize.Width - 10) / 2;
		Col2->ReadOnly = true;
		Col2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;

		// Создание и настройка таблицы
		DataGridView^ dgv = gcnew DataGridView();
		dgv->Anchor = (AnchorStyles::Bottom | AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right);
		dgv->AllowUserToAddRows = false;
		dgv->AllowUserToDeleteRows = false;
		dgv->AllowUserToResizeColumns = false;
		dgv->AllowUserToResizeRows = false;
		dgv->BackgroundColor = System::Drawing::SystemColors::Window;
		dgv->BorderStyle = System::Windows::Forms::BorderStyle::None;
		dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		dgv->Columns->AddRange(Col1, Col2);
		dgv->ReadOnly = true;
		dgv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		dgv->RowHeadersVisible = false;
		dgv->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
		dgv->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
		dgv->Location = System::Drawing::Point(0, 0);
		dgv->Size = System::Drawing::Size(tabControl1->ClientSize.Width - 10, tabControl1->ClientSize.Height - 30);

		// Добавление строк в таблицу
		for (size_t i = 0; i < row.size(); i++)
			dgv->Rows->Add(Math::Round(row[i].first, 6), Math::Round(row[i].second, 6));

		return dgv;
	}

		   // Создание ChartArea 3D
	private: DataVisualization::Charting::ChartArea^ creatChartAread3D()
	{
		DataVisualization::Charting::ChartArea^ chartArea3D = gcnew DataVisualization::Charting::ChartArea();

		chartArea3D->Area3DStyle->Enable3D = true;
		chartArea3D->Area3DStyle->IsClustered = true;
		chartArea3D->Area3DStyle->IsRightAngleAxes = false;
		chartArea3D->Area3DStyle->LightStyle = System::Windows::Forms::DataVisualization::Charting::LightStyle::Realistic;
		chartArea3D->Area3DStyle->Perspective = 1;
		chartArea3D->Area3DStyle->Inclination = 30;
		chartArea3D->Area3DStyle->PointDepth = 1000;
		chartArea3D->Area3DStyle->PointGapDepth = 200;
		chartArea3D->Area3DStyle->WallWidth = 5;
		chartArea3D->Name = L"ChartArea3D";
		chartArea3D->AxisX->Enabled = DataVisualization::Charting::AxisEnabled::False;
		chartArea3D->AxisY->Enabled = DataVisualization::Charting::AxisEnabled::False;

		// КАК БЛЯТЬ ЗУМИТЬ-ТО
		/*chartArea3D->AxisX->ScaleView->Zoom(2, 3);
		chartArea3D->CursorX->IsUserEnabled = true;
		chartArea3D->CursorX->IsUserSelectionEnabled = true;
		chartArea3D->CursorY->IsUserEnabled = true;
		chartArea3D->CursorY->IsUserSelectionEnabled = true;
		chartArea3D->AxisX->ScaleView->Zoomable = true;
		chartArea3D->AxisY->ScaleView->Zoomable = true;
		chartArea3D->AxisX->ScrollBar->IsPositionedInside = true;
		chartArea3D->AxisY->ScrollBar->IsPositionedInside = true;
		chartArea3D->CursorX->Interval = 0.001;
		chartArea3D->CursorY->Interval = 0.001;*/
		//http://www.cyberforum.ru/cpp-cli-winforms/thread614465.html
		//http://www.cyberforum.ru/cpp-cli-winforms/thread963244.html
		//https://www.outcoldman.com/ru/archive/2009/03/21/ms-chart-%D0%BF%D1%80%D0%B8%D0%BC%D0%B5%D1%80-perfomance-counters-c-3d-%D0%B2%D1%80%D0%B0%D1%89%D0%B5%D0%BD%D0%B8%D0%B5%D0%BC/
		// Передвижение области графика MSChart мышью
		//https://ru.stackoverflow.com/questions/558833/%D0%9F%D0%B5%D1%80%D0%B5%D0%B4%D0%B2%D0%B8%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5-%D0%BE%D0%B1%D0%BB%D0%B0%D1%81%D1%82%D0%B8-%D0%B3%D1%80%D0%B0%D1%84%D0%B8%D0%BA%D0%B0-mschart-%D0%BC%D1%8B%D1%88%D1%8C%D1%8E
		//http://qaru.site/questions/12705573/how-to-plot-a-3d-graph-to-represent-an-object-in-space

		//Графики 
		//http://grafikus.ru/plot3d
		//http://blog.kislenko.net/show.php?id=1551




		return chartArea3D;
	}

		   // Создание Series для 3D
	private:  DataVisualization::Charting::Series^ createSeriesFor3D(System::Drawing::Color color)
	{
		DataVisualization::Charting::Series^ series = gcnew DataVisualization::Charting::Series;

		series->ChartArea = L"ChartArea3D";
		series->ChartType = DataVisualization::Charting::SeriesChartType::Spline;
		series->Color = color;
		series->Legend = L"";
		series->IsVisibleInLegend = false;

		return series;
	}

		   // Создание Series для 2D
	private:  DataVisualization::Charting::Series^ createSeriesFor2D(System::String^ name, std::vector<std::pair<double, double>>& XY)
	{
		DataVisualization::Charting::Series^ series = gcnew DataVisualization::Charting::Series;

		series->ChartArea = L"ChartArea1";
		series->ChartType = DataVisualization::Charting::SeriesChartType::Spline;
		series->Legend = L"Legend1";
		Random^ random = gcnew Random(); // для задания рандомного цвета
		series->Color = System::Drawing::Color::FromArgb(random->Next(0, 256), random->Next(0, 256), random->Next(0, 256));
		delete random;
		series->BorderWidth = 2;
		series->Name = name;

		for (size_t i = 0; i < XY.size(); i++)
			series->Points->AddXY(XY[i].first, XY[i].second); // Отрисовка 2D графика

		return series;
	}

		   // Создание 3D графика
	private: void create3DGraph()
	{
		if (chart1->Series->Count > 0)
		{
			auto seriesCount = chart1->Series->Count; // количество series на обычном графике
			for (int i = 0; i < seriesCount; i++)
			{
				chart1->Series->Add(createSeriesFor3D(chart1->Series[i]->Color)); // добавляем новый series для 3D

				auto Point = chart1->Series[i]->Points; // Колличество точек
				for (int size = 0; size < chart1->Series[i]->Points->Count; size++)
				{
					double X = Point[size]->XValue;
					double Y = Point[size]->YValues[0];
					chart1->Series[chart1->Series->Count - 1]->Points->AddXY(X, Y); // Добавление точек на новый series
				}
			}
		}
	}

		   // Создание вкладки для TabControl
	private: void createTabPage(System::String^ name, std::vector<std::pair<double, double>>& row)
	{
		TabPage^ tabPage = gcnew TabPage();
		tabPage->Text = name;

		tabControl1->TabPages->Add(tabPage); // Добавление вкладки в TabControl
		tabControl1->TabPages[tabControl1->TabPages->Count - 1]->Controls->Add(createDataGridView(row));
	}

		   // Заполнение полей при загрузке формы
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Настройка графика
		//https://www.youtube.com/watch?v=995cCh3am-Q
		//chart1->Series[0]->LegendText = "sin(x)";
		//chart1->Series[0]->Color = System::Drawing::Color::Blue;
		//chart1->Series[0]->BorderWidth = 2;


		//chart1->ChartAreas[0]->AxisY->Minimum = -2;
		//chart1->ChartAreas[0]->AxisY->Maximum = 2;

		//chart1->ChartAreas[0]->AxisX->IntervalOffset = 1;
		//chart1->ChartAreas[0]->AxisY->IntervalOffset = 1;

		//chart1->ChartAreas[0]->AxisX->Enabled = DataVisualization::Charting::AxisEnabled::False;
		//chart1->ChartAreas[0]->AxisY->Enabled = DataVisualization::Charting::AxisEnabled::False;
			// Стрелки
		//chart1->ChartAreas[0]->AxisY->ArrowStyle = DataVisualization::Charting::AxisArrowStyle::Triangle;
		//chart1->ChartAreas[0]->AxisX->ArrowStyle = DataVisualization::Charting::AxisArrowStyle::Triangle;
		chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = 1;
		chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = 1;

		// Данные
		textBox1->Text = "sin(x)";  // function
		textBox2->Text = "-5";	    // a
		textBox3->Text = "5";	    // b
		textBox4->Text = "0,1";	    // dx

		// Табулирование
		tabulation::Tabl* tabl = new tabulation::Tabl("sin(x)", -5.0, 5.0, 0.1);
		tabl->tabulation();
		auto XY = tabl->getXY();

		chart1->Series->Add(createSeriesFor2D(textBox1->Text, XY)); // Созданиe 2D графика
		createTabPage(textBox1->Text, XY); // Добавление вкладки в TabControl
		tabControl1->SelectedIndex = tabControl1->TabPages->Count - 1; // Переход на последюю вкладку TabControl
		delete tabl;
	}

			 // Проверка введенных данных в "Function"
	private: System::Void TextBox1_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			std::string func;
			marshalString(textBox1->Text, func);
			func = replaceString(func, "x", "1");
			mathparser::MathParser* parser = new mathparser::MathParser(func.c_str());
			auto answer = parser->parser();
			delete parser;
			textBox1->ForeColor = System::Drawing::Color::Black;
		}
		catch (std::exception & e)
		{
			textBox1->ForeColor = System::Drawing::Color::Red;
			std::string da = e.what();
			String^ text = gcnew String(da.c_str());
			MessageBox::Show(text, "Error in function.", MessageBoxButtons::OK);
		}
	}

		   // Проверка введенных данных в "a"
	private: System::Void TextBox2_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			std::string func;
			marshalString(textBox2->Text, func);
			mathparser::MathParser* parser = new mathparser::MathParser(func.c_str());
			auto answer = parser->parser();
			delete parser;
			textBox2->ForeColor = System::Drawing::Color::Black;
		}
		catch (std::exception & e)
		{
			textBox2->ForeColor = System::Drawing::Color::Red;
			std::string da = e.what();
			String^ text = gcnew String(da.c_str());
			MessageBox::Show(text, "Argument error a.", MessageBoxButtons::OK);
		}
	}

		   // Проверка введенных данных в "b"
	private: System::Void TextBox3_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			std::string func;
			marshalString(textBox3->Text, func);
			mathparser::MathParser* parser = new mathparser::MathParser(func.c_str());
			auto answer = parser->parser();
			delete parser;
			textBox3->ForeColor = System::Drawing::Color::Black;
		}
		catch (std::exception & e)
		{
			textBox3->ForeColor = System::Drawing::Color::Red;
			std::string da = e.what();
			String^ text = gcnew String(da.c_str());
			MessageBox::Show(text, "Argument error b.", MessageBoxButtons::OK);
		}
	}

		   // Проверка введенных данных в "dx"
	private: System::Void TextBox4_Leave(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			std::string func;
			marshalString(textBox4->Text, func);
			mathparser::MathParser* parser = new mathparser::MathParser(func.c_str());
			auto answer = parser->parser();
			delete parser;
			textBox4->ForeColor = System::Drawing::Color::Black;
		}
		catch (std::exception & e)
		{
			textBox4->ForeColor = System::Drawing::Color::Red;
			std::string da = e.what();
			String^ text = gcnew String(da.c_str());
			MessageBox::Show(text, "Argument error dx.", MessageBoxButtons::OK);
		}
	}
		   
		   // Обработка нажатия Calculate
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->ForeColor == Drawing::Color::Red || // Если какое-то поле красное
			textBox2->ForeColor == Drawing::Color::Red ||
			textBox3->ForeColor == Drawing::Color::Red ||
			textBox4->ForeColor == Drawing::Color::Red)
		{
			MessageBox::Show("Enter the correct data.", "Error", MessageBoxButtons::OK); // ошибка
			return;
		}

		if (!validationСheck())
			return;

		if (firstStart)
		{
			firstStart = false;
			tabControl1->TabPages->Clear(); // удаление начальной вкладки в TabControl
			chart1->Series->Clear(); // удаление начального графика
		}

		if (!checkBox1->Checked) // Если включена очистка
		{
			chart1->Series->Clear();
			tabControl1->TabPages->Clear();
		}

		if (checkBox2->Checked) // если включен 3D график 
		{
			int index = chart1->Series->Count / 2;
			for (int i = 0; i < index; i++)
				chart1->Series->RemoveAt(index); // удалить все series для 3D графика
		}

		String^ functionName = searchFunction();

		std::string func;
		marshalString(textBox1->Text, func);

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// ОПРЕДЕЛИТЬСЯ С УПРАВЛЕНИЕМ 3D ГРАФИКА
		// НАСТРОИТЬ СЕТКИ НА 2D И 3D ГРАФИКЕ
		// УДАЛИТЬ SERIES 1  ПРИ ЗАГРУЗКЕ ФОРМЫ
		// ДОБАВИТЬ В ПАРСЕР PI EXP
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// Табулирование
		tabulation::Tabl* tabl = new tabulation::Tabl(func, _a, _b, _dx);
		tabl->tabulation();
		auto XY = tabl->getXY();

		chart1->Series->Add(createSeriesFor2D(functionName, XY)); // Созданиe 2D графика
		if (checkBox2->Checked)
			create3DGraph(); // Созданиe 3D графика

		createTabPage(functionName, XY); // Добавление вкладки в TabControl
		tabControl1->SelectedIndex = tabControl1->TabPages->Count - 1; // Переход на последюю вкладку TabControl

		delete functionName;
		delete tabl;
		XY.clear();
	}

		   // Добавление/удаление 3D Графика
	private: System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox2->Checked)
		{
			chart1->ChartAreas->Add(creatChartAread3D());
			create3DGraph();
		}
		else if (!checkBox2->Checked)
		{
			int index = chart1->Series->Count / 2;
			for (int i = 0; i < index; i++)
				chart1->Series->RemoveAt(index); // удалить все series для 3D графика
			chart1->ChartAreas->RemoveAt(1); // удалить 3D график
		}
	}

		   // Очистка данных в таблице и на графике
	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (!checkBox1->Checked)
		{
			tabControl1->TabPages->Clear();
			chart1->Series->Clear();
		}
	}

	};
}

//http://blog.kislenko.net/show.php?id=1284

// для tabcontrol
//https://metanit.com/sharp/windowsforms/3.5.php