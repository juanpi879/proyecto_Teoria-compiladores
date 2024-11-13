// Generated from /compilers/prog_kids/ProgramacionNinos.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class ProgramacionNinosParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, T__46=47, T__47=48, T__48=49, T__49=50, T__50=51, T__51=52, 
		T__52=53, T__53=54, T__54=55, T__55=56, ID=57, INT=58, STRING=59, WS=60, 
		PUNTOYCOMA=61, COMENTARIO=62, COMENTARIO_MULTILINEA=63;
	public static final int
		RULE_programa = 0, RULE_instruccion = 1, RULE_asignacion = 2, RULE_imprimir = 3, 
		RULE_entrada = 4, RULE_condicional = 5, RULE_bucle = 6, RULE_bucleMientras = 7, 
		RULE_buclepara = 8, RULE_expresion = 9, RULE_condicion = 10, RULE_funcion = 11, 
		RULE_llamadaFuncion = 12, RULE_clase = 13, RULE_metodo = 14, RULE_creacionObjeto = 15, 
		RULE_accesoObjeto = 16, RULE_arregloDeclaracion = 17, RULE_accesoArreglo = 18, 
		RULE_segun = 19, RULE_caso = 20, RULE_pausar = 21, RULE_continuar = 22, 
		RULE_evento = 23, RULE_funcionMatematica = 24, RULE_comentario = 25;
	private static String[] makeRuleNames() {
		return new String[] {
			"programa", "instruccion", "asignacion", "imprimir", "entrada", "condicional", 
			"bucle", "bucleMientras", "buclepara", "expresion", "condicion", "funcion", 
			"llamadaFuncion", "clase", "metodo", "creacionObjeto", "accesoObjeto", 
			"arregloDeclaracion", "accesoArreglo", "segun", "caso", "pausar", "continuar", 
			"evento", "funcionMatematica", "comentario"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'variable'", "'='", "'imprimir'", "'('", "')'", "'leer'", "'si'", 
			"'{'", "'}'", "'sino'", "'repetir'", "'mientras'", "'para'", "'verdadero'", 
			"'falso'", "'+'", "'-'", "'*'", "'/'", "'concatenar'", "'y'", "'o'", 
			"'no'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'cualquier'", 
			"'definir'", "','", "'clase'", "'hereda'", "'nuevo'", "'.'", "'arreglo'", 
			"'['", "']'", "'segun'", "'defecto'", "'caso'", "':'", "'pausar'", "'continuar'", 
			"'mover'", "'hacia'", "'girar'", "'a'", "'encender'", "'apagar'", "'sumar'", 
			"'restar'", "'multiplicar'", "'dividir'", "'comentar'", null, null, null, 
			null, "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, "ID", "INT", "STRING", 
			"WS", "PUNTOYCOMA", "COMENTARIO", "COMENTARIO_MULTILINEA"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ProgramacionNinos.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ProgramacionNinosParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramaContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(ProgramacionNinosParser.EOF, 0); }
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public ProgramaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programa; }
	}

	public final ProgramaContext programa() throws RecognitionException {
		ProgramaContext _localctx = new ProgramaContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_programa);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(53); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(52);
				instruccion();
				}
				}
				setState(55); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0) );
			setState(57);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InstruccionContext extends ParserRuleContext {
		public AsignacionContext asignacion() {
			return getRuleContext(AsignacionContext.class,0);
		}
		public ImprimirContext imprimir() {
			return getRuleContext(ImprimirContext.class,0);
		}
		public CondicionalContext condicional() {
			return getRuleContext(CondicionalContext.class,0);
		}
		public BucleContext bucle() {
			return getRuleContext(BucleContext.class,0);
		}
		public BucleMientrasContext bucleMientras() {
			return getRuleContext(BucleMientrasContext.class,0);
		}
		public BucleparaContext buclepara() {
			return getRuleContext(BucleparaContext.class,0);
		}
		public ArregloDeclaracionContext arregloDeclaracion() {
			return getRuleContext(ArregloDeclaracionContext.class,0);
		}
		public AccesoArregloContext accesoArreglo() {
			return getRuleContext(AccesoArregloContext.class,0);
		}
		public ClaseContext clase() {
			return getRuleContext(ClaseContext.class,0);
		}
		public CreacionObjetoContext creacionObjeto() {
			return getRuleContext(CreacionObjetoContext.class,0);
		}
		public AccesoObjetoContext accesoObjeto() {
			return getRuleContext(AccesoObjetoContext.class,0);
		}
		public MetodoContext metodo() {
			return getRuleContext(MetodoContext.class,0);
		}
		public LlamadaFuncionContext llamadaFuncion() {
			return getRuleContext(LlamadaFuncionContext.class,0);
		}
		public SegunContext segun() {
			return getRuleContext(SegunContext.class,0);
		}
		public PausarContext pausar() {
			return getRuleContext(PausarContext.class,0);
		}
		public ContinuarContext continuar() {
			return getRuleContext(ContinuarContext.class,0);
		}
		public EntradaContext entrada() {
			return getRuleContext(EntradaContext.class,0);
		}
		public EventoContext evento() {
			return getRuleContext(EventoContext.class,0);
		}
		public FuncionMatematicaContext funcionMatematica() {
			return getRuleContext(FuncionMatematicaContext.class,0);
		}
		public ComentarioContext comentario() {
			return getRuleContext(ComentarioContext.class,0);
		}
		public InstruccionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruccion; }
	}

	public final InstruccionContext instruccion() throws RecognitionException {
		InstruccionContext _localctx = new InstruccionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_instruccion);
		try {
			setState(79);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(59);
				asignacion();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(60);
				imprimir();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(61);
				condicional();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(62);
				bucle();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(63);
				bucleMientras();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(64);
				buclepara();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(65);
				arregloDeclaracion();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(66);
				accesoArreglo();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(67);
				clase();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(68);
				creacionObjeto();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(69);
				accesoObjeto();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(70);
				metodo();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(71);
				llamadaFuncion();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(72);
				segun();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(73);
				pausar();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(74);
				continuar();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(75);
				entrada();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(76);
				evento();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(77);
				funcionMatematica();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(78);
				comentario();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AsignacionContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public AsignacionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_asignacion; }
	}

	public final AsignacionContext asignacion() throws RecognitionException {
		AsignacionContext _localctx = new AsignacionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_asignacion);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			match(T__0);
			setState(82);
			match(ID);
			setState(83);
			match(T__1);
			setState(84);
			expresion(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImprimirContext extends ParserRuleContext {
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public ImprimirContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_imprimir; }
	}

	public final ImprimirContext imprimir() throws RecognitionException {
		ImprimirContext _localctx = new ImprimirContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_imprimir);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(86);
			match(T__2);
			setState(87);
			match(T__3);
			setState(88);
			expresion(0);
			setState(89);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EntradaContext extends ParserRuleContext {
		public EntradaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_entrada; }
	}

	public final EntradaContext entrada() throws RecognitionException {
		EntradaContext _localctx = new EntradaContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_entrada);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(91);
			match(T__5);
			setState(92);
			match(T__3);
			setState(93);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondicionalContext extends ParserRuleContext {
		public CondicionContext condicion() {
			return getRuleContext(CondicionContext.class,0);
		}
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public CondicionalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condicional; }
	}

	public final CondicionalContext condicional() throws RecognitionException {
		CondicionalContext _localctx = new CondicionalContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_condicional);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(95);
			match(T__6);
			setState(96);
			match(T__3);
			setState(97);
			condicion(0);
			setState(98);
			match(T__4);
			setState(99);
			match(T__7);
			setState(103);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
				{
				{
				setState(100);
				instruccion();
				}
				}
				setState(105);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(106);
			match(T__8);
			setState(116);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__9) {
				{
				setState(107);
				match(T__9);
				setState(108);
				match(T__7);
				setState(112);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
					{
					{
					setState(109);
					instruccion();
					}
					}
					setState(114);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(115);
				match(T__8);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BucleContext extends ParserRuleContext {
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public BucleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bucle; }
	}

	public final BucleContext bucle() throws RecognitionException {
		BucleContext _localctx = new BucleContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_bucle);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			match(T__10);
			setState(119);
			match(T__3);
			setState(120);
			expresion(0);
			setState(121);
			match(T__4);
			setState(122);
			match(T__7);
			setState(126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
				{
				{
				setState(123);
				instruccion();
				}
				}
				setState(128);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(129);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BucleMientrasContext extends ParserRuleContext {
		public CondicionContext condicion() {
			return getRuleContext(CondicionContext.class,0);
		}
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public BucleMientrasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bucleMientras; }
	}

	public final BucleMientrasContext bucleMientras() throws RecognitionException {
		BucleMientrasContext _localctx = new BucleMientrasContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_bucleMientras);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			match(T__11);
			setState(132);
			match(T__3);
			setState(133);
			condicion(0);
			setState(134);
			match(T__4);
			setState(135);
			match(T__7);
			setState(139);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
				{
				{
				setState(136);
				instruccion();
				}
				}
				setState(141);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(142);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BucleparaContext extends ParserRuleContext {
		public List<AsignacionContext> asignacion() {
			return getRuleContexts(AsignacionContext.class);
		}
		public AsignacionContext asignacion(int i) {
			return getRuleContext(AsignacionContext.class,i);
		}
		public List<TerminalNode> PUNTOYCOMA() { return getTokens(ProgramacionNinosParser.PUNTOYCOMA); }
		public TerminalNode PUNTOYCOMA(int i) {
			return getToken(ProgramacionNinosParser.PUNTOYCOMA, i);
		}
		public CondicionContext condicion() {
			return getRuleContext(CondicionContext.class,0);
		}
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public BucleparaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_buclepara; }
	}

	public final BucleparaContext buclepara() throws RecognitionException {
		BucleparaContext _localctx = new BucleparaContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_buclepara);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(T__12);
			setState(145);
			match(T__3);
			setState(146);
			asignacion();
			setState(147);
			match(PUNTOYCOMA);
			setState(148);
			condicion(0);
			setState(149);
			match(PUNTOYCOMA);
			setState(150);
			asignacion();
			setState(151);
			match(T__4);
			setState(152);
			match(T__7);
			setState(156);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
				{
				{
				setState(153);
				instruccion();
				}
				}
				setState(158);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(159);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpresionContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(ProgramacionNinosParser.INT, 0); }
		public TerminalNode STRING() { return getToken(ProgramacionNinosParser.STRING, 0); }
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public List<ExpresionContext> expresion() {
			return getRuleContexts(ExpresionContext.class);
		}
		public ExpresionContext expresion(int i) {
			return getRuleContext(ExpresionContext.class,i);
		}
		public AccesoArregloContext accesoArreglo() {
			return getRuleContext(AccesoArregloContext.class,0);
		}
		public ExpresionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expresion; }
	}

	public final ExpresionContext expresion() throws RecognitionException {
		return expresion(0);
	}

	private ExpresionContext expresion(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpresionContext _localctx = new ExpresionContext(_ctx, _parentState);
		ExpresionContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_expresion, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(162);
				match(INT);
				}
				break;
			case 2:
				{
				setState(163);
				match(STRING);
				}
				break;
			case 3:
				{
				setState(164);
				match(T__13);
				}
				break;
			case 4:
				{
				setState(165);
				match(T__14);
				}
				break;
			case 5:
				{
				setState(166);
				match(ID);
				}
				break;
			case 6:
				{
				setState(167);
				match(T__22);
				setState(168);
				expresion(2);
				}
				break;
			case 7:
				{
				setState(169);
				accesoArreglo();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(183);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(181);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
					case 1:
						{
						_localctx = new ExpresionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expresion);
						setState(172);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(173);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2031616L) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(174);
						expresion(6);
						}
						break;
					case 2:
						{
						_localctx = new ExpresionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expresion);
						setState(175);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(176);
						match(T__20);
						setState(177);
						expresion(5);
						}
						break;
					case 3:
						{
						_localctx = new ExpresionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expresion);
						setState(178);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(179);
						match(T__21);
						setState(180);
						expresion(4);
						}
						break;
					}
					} 
				}
				setState(185);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CondicionContext extends ParserRuleContext {
		public List<ExpresionContext> expresion() {
			return getRuleContexts(ExpresionContext.class);
		}
		public ExpresionContext expresion(int i) {
			return getRuleContext(ExpresionContext.class,i);
		}
		public TerminalNode STRING() { return getToken(ProgramacionNinosParser.STRING, 0); }
		public List<CondicionContext> condicion() {
			return getRuleContexts(CondicionContext.class);
		}
		public CondicionContext condicion(int i) {
			return getRuleContext(CondicionContext.class,i);
		}
		public CondicionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condicion; }
	}

	public final CondicionContext condicion() throws RecognitionException {
		return condicion(0);
	}

	private CondicionContext condicion(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		CondicionContext _localctx = new CondicionContext(_ctx, _parentState);
		CondicionContext _prevctx = _localctx;
		int _startState = 20;
		enterRecursionRule(_localctx, 20, RULE_condicion, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(187);
				expresion(0);
				setState(188);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 1056964608L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(189);
				expresion(0);
				}
				break;
			case 2:
				{
				setState(191);
				expresion(0);
				setState(192);
				_la = _input.LA(1);
				if ( !(_la==T__23 || _la==T__24) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(193);
				match(STRING);
				}
				break;
			case 3:
				{
				setState(195);
				match(T__22);
				setState(196);
				condicion(2);
				}
				break;
			case 4:
				{
				setState(197);
				match(T__29);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(208);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(206);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new CondicionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_condicion);
						setState(200);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(201);
						match(T__20);
						setState(202);
						condicion(5);
						}
						break;
					case 2:
						{
						_localctx = new CondicionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_condicion);
						setState(203);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(204);
						match(T__21);
						setState(205);
						condicion(4);
						}
						break;
					}
					} 
				}
				setState(210);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FuncionContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(ProgramacionNinosParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(ProgramacionNinosParser.ID, i);
		}
		public InstruccionContext instruccion() {
			return getRuleContext(InstruccionContext.class,0);
		}
		public FuncionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcion; }
	}

	public final FuncionContext funcion() throws RecognitionException {
		FuncionContext _localctx = new FuncionContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_funcion);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(211);
			match(T__30);
			setState(212);
			match(ID);
			setState(213);
			match(T__3);
			setState(217);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(214);
				match(ID);
				{
				setState(215);
				match(T__31);
				setState(216);
				match(ID);
				}
				}
			}

			setState(219);
			match(T__4);
			setState(220);
			match(T__7);
			{
			setState(221);
			instruccion();
			}
			setState(222);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LlamadaFuncionContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public List<ExpresionContext> expresion() {
			return getRuleContexts(ExpresionContext.class);
		}
		public ExpresionContext expresion(int i) {
			return getRuleContext(ExpresionContext.class,i);
		}
		public LlamadaFuncionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_llamadaFuncion; }
	}

	public final LlamadaFuncionContext llamadaFuncion() throws RecognitionException {
		LlamadaFuncionContext _localctx = new LlamadaFuncionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_llamadaFuncion);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(224);
			match(ID);
			setState(225);
			match(T__3);
			setState(234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1008806316539428864L) != 0)) {
				{
				setState(226);
				expresion(0);
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__31) {
					{
					{
					setState(227);
					match(T__31);
					setState(228);
					expresion(0);
					}
					}
					setState(233);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(236);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ClaseContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(ProgramacionNinosParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(ProgramacionNinosParser.ID, i);
		}
		public List<AsignacionContext> asignacion() {
			return getRuleContexts(AsignacionContext.class);
		}
		public AsignacionContext asignacion(int i) {
			return getRuleContext(AsignacionContext.class,i);
		}
		public List<MetodoContext> metodo() {
			return getRuleContexts(MetodoContext.class);
		}
		public MetodoContext metodo(int i) {
			return getRuleContext(MetodoContext.class,i);
		}
		public ClaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_clase; }
	}

	public final ClaseContext clase() throws RecognitionException {
		ClaseContext _localctx = new ClaseContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_clase);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			match(T__32);
			setState(239);
			match(ID);
			setState(242);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__33) {
				{
				setState(240);
				match(T__33);
				setState(241);
				match(ID);
				}
			}

			setState(244);
			match(T__7);
			setState(249);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0 || _la==T__30) {
				{
				setState(247);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__0:
					{
					setState(245);
					asignacion();
					}
					break;
				case T__30:
					{
					setState(246);
					metodo();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(252);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MetodoContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(ProgramacionNinosParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(ProgramacionNinosParser.ID, i);
		}
		public InstruccionContext instruccion() {
			return getRuleContext(InstruccionContext.class,0);
		}
		public MetodoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_metodo; }
	}

	public final MetodoContext metodo() throws RecognitionException {
		MetodoContext _localctx = new MetodoContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_metodo);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
			match(T__30);
			setState(255);
			match(ID);
			setState(256);
			match(T__3);
			setState(260);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(257);
				match(ID);
				{
				setState(258);
				match(T__31);
				setState(259);
				match(ID);
				}
				}
			}

			setState(262);
			match(T__4);
			setState(263);
			match(T__7);
			{
			setState(264);
			instruccion();
			}
			setState(265);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CreacionObjetoContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public CreacionObjetoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_creacionObjeto; }
	}

	public final CreacionObjetoContext creacionObjeto() throws RecognitionException {
		CreacionObjetoContext _localctx = new CreacionObjetoContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_creacionObjeto);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(267);
			match(T__34);
			setState(268);
			match(ID);
			setState(269);
			match(T__3);
			setState(270);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AccesoObjetoContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(ProgramacionNinosParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(ProgramacionNinosParser.ID, i);
		}
		public AccesoObjetoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_accesoObjeto; }
	}

	public final AccesoObjetoContext accesoObjeto() throws RecognitionException {
		AccesoObjetoContext _localctx = new AccesoObjetoContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_accesoObjeto);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(272);
			match(ID);
			setState(273);
			match(T__35);
			setState(274);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArregloDeclaracionContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public TerminalNode INT() { return getToken(ProgramacionNinosParser.INT, 0); }
		public List<ExpresionContext> expresion() {
			return getRuleContexts(ExpresionContext.class);
		}
		public ExpresionContext expresion(int i) {
			return getRuleContext(ExpresionContext.class,i);
		}
		public ArregloDeclaracionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arregloDeclaracion; }
	}

	public final ArregloDeclaracionContext arregloDeclaracion() throws RecognitionException {
		ArregloDeclaracionContext _localctx = new ArregloDeclaracionContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_arregloDeclaracion);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(276);
			match(T__36);
			setState(277);
			match(ID);
			setState(278);
			match(T__37);
			setState(279);
			match(INT);
			setState(280);
			match(T__38);
			setState(281);
			match(T__1);
			setState(282);
			match(T__7);
			setState(291);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1008806316539428864L) != 0)) {
				{
				setState(283);
				expresion(0);
				setState(288);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__31) {
					{
					{
					setState(284);
					match(T__31);
					setState(285);
					expresion(0);
					}
					}
					setState(290);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(293);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AccesoArregloContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public AccesoArregloContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_accesoArreglo; }
	}

	public final AccesoArregloContext accesoArreglo() throws RecognitionException {
		AccesoArregloContext _localctx = new AccesoArregloContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_accesoArreglo);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			match(ID);
			setState(296);
			match(T__37);
			setState(297);
			expresion(0);
			setState(298);
			match(T__38);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SegunContext extends ParserRuleContext {
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public List<CasoContext> caso() {
			return getRuleContexts(CasoContext.class);
		}
		public CasoContext caso(int i) {
			return getRuleContext(CasoContext.class,i);
		}
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public SegunContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_segun; }
	}

	public final SegunContext segun() throws RecognitionException {
		SegunContext _localctx = new SegunContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_segun);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(300);
			match(T__39);
			setState(301);
			match(T__3);
			setState(302);
			expresion(0);
			setState(303);
			match(T__4);
			setState(304);
			match(T__7);
			setState(308);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__41) {
				{
				{
				setState(305);
				caso();
				}
				}
				setState(310);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(323);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__40) {
				{
				setState(311);
				match(T__40);
				setState(321);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__0:
				case T__2:
				case T__5:
				case T__6:
				case T__10:
				case T__11:
				case T__12:
				case T__30:
				case T__32:
				case T__34:
				case T__36:
				case T__39:
				case T__43:
				case T__44:
				case T__45:
				case T__47:
				case T__49:
				case T__50:
				case T__51:
				case T__52:
				case T__53:
				case T__54:
				case T__55:
				case ID:
					{
					setState(312);
					instruccion();
					}
					break;
				case T__7:
					{
					setState(313);
					match(T__7);
					setState(317);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
						{
						{
						setState(314);
						instruccion();
						}
						}
						setState(319);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(320);
					match(T__8);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
			}

			setState(325);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CasoContext extends ParserRuleContext {
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public List<InstruccionContext> instruccion() {
			return getRuleContexts(InstruccionContext.class);
		}
		public InstruccionContext instruccion(int i) {
			return getRuleContext(InstruccionContext.class,i);
		}
		public CasoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caso; }
	}

	public final CasoContext caso() throws RecognitionException {
		CasoContext _localctx = new CasoContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_caso);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(327);
			match(T__41);
			setState(328);
			expresion(0);
			setState(329);
			match(T__42);
			setState(333);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 287510378571643082L) != 0)) {
				{
				{
				setState(330);
				instruccion();
				}
				}
				setState(335);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PausarContext extends ParserRuleContext {
		public PausarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pausar; }
	}

	public final PausarContext pausar() throws RecognitionException {
		PausarContext _localctx = new PausarContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_pausar);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(336);
			match(T__43);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ContinuarContext extends ParserRuleContext {
		public ContinuarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_continuar; }
	}

	public final ContinuarContext continuar() throws RecognitionException {
		ContinuarContext _localctx = new ContinuarContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_continuar);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(338);
			match(T__44);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EventoContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(ProgramacionNinosParser.ID, 0); }
		public ExpresionContext expresion() {
			return getRuleContext(ExpresionContext.class,0);
		}
		public EventoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_evento; }
	}

	public final EventoContext evento() throws RecognitionException {
		EventoContext _localctx = new EventoContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_evento);
		try {
			setState(352);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__45:
				enterOuterAlt(_localctx, 1);
				{
				setState(340);
				match(T__45);
				setState(341);
				match(ID);
				setState(342);
				match(T__46);
				setState(343);
				expresion(0);
				}
				break;
			case T__47:
				enterOuterAlt(_localctx, 2);
				{
				setState(344);
				match(T__47);
				setState(345);
				match(ID);
				setState(346);
				match(T__48);
				setState(347);
				expresion(0);
				}
				break;
			case T__49:
				enterOuterAlt(_localctx, 3);
				{
				setState(348);
				match(T__49);
				setState(349);
				match(ID);
				}
				break;
			case T__50:
				enterOuterAlt(_localctx, 4);
				{
				setState(350);
				match(T__50);
				setState(351);
				match(ID);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FuncionMatematicaContext extends ParserRuleContext {
		public List<ExpresionContext> expresion() {
			return getRuleContexts(ExpresionContext.class);
		}
		public ExpresionContext expresion(int i) {
			return getRuleContext(ExpresionContext.class,i);
		}
		public FuncionMatematicaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcionMatematica; }
	}

	public final FuncionMatematicaContext funcionMatematica() throws RecognitionException {
		FuncionMatematicaContext _localctx = new FuncionMatematicaContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_funcionMatematica);
		try {
			setState(382);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__51:
				enterOuterAlt(_localctx, 1);
				{
				setState(354);
				match(T__51);
				setState(355);
				match(T__3);
				setState(356);
				expresion(0);
				setState(357);
				match(T__31);
				setState(358);
				expresion(0);
				setState(359);
				match(T__4);
				}
				break;
			case T__52:
				enterOuterAlt(_localctx, 2);
				{
				setState(361);
				match(T__52);
				setState(362);
				match(T__3);
				setState(363);
				expresion(0);
				setState(364);
				match(T__31);
				setState(365);
				expresion(0);
				setState(366);
				match(T__4);
				}
				break;
			case T__53:
				enterOuterAlt(_localctx, 3);
				{
				setState(368);
				match(T__53);
				setState(369);
				match(T__3);
				setState(370);
				expresion(0);
				setState(371);
				match(T__31);
				setState(372);
				expresion(0);
				setState(373);
				match(T__4);
				}
				break;
			case T__54:
				enterOuterAlt(_localctx, 4);
				{
				setState(375);
				match(T__54);
				setState(376);
				match(T__3);
				setState(377);
				expresion(0);
				setState(378);
				match(T__31);
				setState(379);
				expresion(0);
				setState(380);
				match(T__4);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComentarioContext extends ParserRuleContext {
		public TerminalNode STRING() { return getToken(ProgramacionNinosParser.STRING, 0); }
		public ComentarioContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comentario; }
	}

	public final ComentarioContext comentario() throws RecognitionException {
		ComentarioContext _localctx = new ComentarioContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_comentario);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(384);
			match(T__55);
			setState(385);
			match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 9:
			return expresion_sempred((ExpresionContext)_localctx, predIndex);
		case 10:
			return condicion_sempred((CondicionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expresion_sempred(ExpresionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 5);
		case 1:
			return precpred(_ctx, 4);
		case 2:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean condicion_sempred(CondicionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 4);
		case 4:
			return precpred(_ctx, 3);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001?\u0184\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0001\u0000\u0004\u00006\b\u0000\u000b\u0000"+
		"\f\u00007\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001"+
		"P\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005f\b\u0005\n\u0005\f\u0005"+
		"i\t\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005"+
		"o\b\u0005\n\u0005\f\u0005r\t\u0005\u0001\u0005\u0003\u0005u\b\u0005\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0005"+
		"\u0006}\b\u0006\n\u0006\f\u0006\u0080\t\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0005\u0007\u008a\b\u0007\n\u0007\f\u0007\u008d\t\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b"+
		"\u0001\b\u0001\b\u0005\b\u009b\b\b\n\b\f\b\u009e\t\b\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0003"+
		"\t\u00ab\b\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0005\t\u00b6\b\t\n\t\f\t\u00b9\t\t\u0001\n\u0001\n\u0001\n"+
		"\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0003\n\u00c7\b\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0005"+
		"\n\u00cf\b\n\n\n\f\n\u00d2\t\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u00da\b\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0005\f\u00e6\b\f\n\f\f\f\u00e9\t\f\u0003\f\u00eb\b\f\u0001"+
		"\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00f3\b\r\u0001\r\u0001"+
		"\r\u0001\r\u0005\r\u00f8\b\r\n\r\f\r\u00fb\t\r\u0001\r\u0001\r\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e"+
		"\u0105\b\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0005\u0011\u011f\b\u0011\n\u0011\f\u0011\u0122\t\u0011\u0003"+
		"\u0011\u0124\b\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0005\u0013\u0133\b\u0013\n\u0013\f\u0013"+
		"\u0136\t\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0005\u0013"+
		"\u013c\b\u0013\n\u0013\f\u0013\u013f\t\u0013\u0001\u0013\u0003\u0013\u0142"+
		"\b\u0013\u0003\u0013\u0144\b\u0013\u0001\u0013\u0001\u0013\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0005\u0014\u014c\b\u0014\n\u0014"+
		"\f\u0014\u014f\t\u0014\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0003\u0017\u0161\b\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0003\u0018\u017f\b\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0000\u0002\u0012\u0014\u001a\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,.02\u0000\u0003\u0001"+
		"\u0000\u0010\u0014\u0001\u0000\u0018\u001d\u0001\u0000\u0018\u0019\u01a5"+
		"\u00005\u0001\u0000\u0000\u0000\u0002O\u0001\u0000\u0000\u0000\u0004Q"+
		"\u0001\u0000\u0000\u0000\u0006V\u0001\u0000\u0000\u0000\b[\u0001\u0000"+
		"\u0000\u0000\n_\u0001\u0000\u0000\u0000\fv\u0001\u0000\u0000\u0000\u000e"+
		"\u0083\u0001\u0000\u0000\u0000\u0010\u0090\u0001\u0000\u0000\u0000\u0012"+
		"\u00aa\u0001\u0000\u0000\u0000\u0014\u00c6\u0001\u0000\u0000\u0000\u0016"+
		"\u00d3\u0001\u0000\u0000\u0000\u0018\u00e0\u0001\u0000\u0000\u0000\u001a"+
		"\u00ee\u0001\u0000\u0000\u0000\u001c\u00fe\u0001\u0000\u0000\u0000\u001e"+
		"\u010b\u0001\u0000\u0000\u0000 \u0110\u0001\u0000\u0000\u0000\"\u0114"+
		"\u0001\u0000\u0000\u0000$\u0127\u0001\u0000\u0000\u0000&\u012c\u0001\u0000"+
		"\u0000\u0000(\u0147\u0001\u0000\u0000\u0000*\u0150\u0001\u0000\u0000\u0000"+
		",\u0152\u0001\u0000\u0000\u0000.\u0160\u0001\u0000\u0000\u00000\u017e"+
		"\u0001\u0000\u0000\u00002\u0180\u0001\u0000\u0000\u000046\u0003\u0002"+
		"\u0001\u000054\u0001\u0000\u0000\u000067\u0001\u0000\u0000\u000075\u0001"+
		"\u0000\u0000\u000078\u0001\u0000\u0000\u000089\u0001\u0000\u0000\u0000"+
		"9:\u0005\u0000\u0000\u0001:\u0001\u0001\u0000\u0000\u0000;P\u0003\u0004"+
		"\u0002\u0000<P\u0003\u0006\u0003\u0000=P\u0003\n\u0005\u0000>P\u0003\f"+
		"\u0006\u0000?P\u0003\u000e\u0007\u0000@P\u0003\u0010\b\u0000AP\u0003\""+
		"\u0011\u0000BP\u0003$\u0012\u0000CP\u0003\u001a\r\u0000DP\u0003\u001e"+
		"\u000f\u0000EP\u0003 \u0010\u0000FP\u0003\u001c\u000e\u0000GP\u0003\u0018"+
		"\f\u0000HP\u0003&\u0013\u0000IP\u0003*\u0015\u0000JP\u0003,\u0016\u0000"+
		"KP\u0003\b\u0004\u0000LP\u0003.\u0017\u0000MP\u00030\u0018\u0000NP\u0003"+
		"2\u0019\u0000O;\u0001\u0000\u0000\u0000O<\u0001\u0000\u0000\u0000O=\u0001"+
		"\u0000\u0000\u0000O>\u0001\u0000\u0000\u0000O?\u0001\u0000\u0000\u0000"+
		"O@\u0001\u0000\u0000\u0000OA\u0001\u0000\u0000\u0000OB\u0001\u0000\u0000"+
		"\u0000OC\u0001\u0000\u0000\u0000OD\u0001\u0000\u0000\u0000OE\u0001\u0000"+
		"\u0000\u0000OF\u0001\u0000\u0000\u0000OG\u0001\u0000\u0000\u0000OH\u0001"+
		"\u0000\u0000\u0000OI\u0001\u0000\u0000\u0000OJ\u0001\u0000\u0000\u0000"+
		"OK\u0001\u0000\u0000\u0000OL\u0001\u0000\u0000\u0000OM\u0001\u0000\u0000"+
		"\u0000ON\u0001\u0000\u0000\u0000P\u0003\u0001\u0000\u0000\u0000QR\u0005"+
		"\u0001\u0000\u0000RS\u00059\u0000\u0000ST\u0005\u0002\u0000\u0000TU\u0003"+
		"\u0012\t\u0000U\u0005\u0001\u0000\u0000\u0000VW\u0005\u0003\u0000\u0000"+
		"WX\u0005\u0004\u0000\u0000XY\u0003\u0012\t\u0000YZ\u0005\u0005\u0000\u0000"+
		"Z\u0007\u0001\u0000\u0000\u0000[\\\u0005\u0006\u0000\u0000\\]\u0005\u0004"+
		"\u0000\u0000]^\u0005\u0005\u0000\u0000^\t\u0001\u0000\u0000\u0000_`\u0005"+
		"\u0007\u0000\u0000`a\u0005\u0004\u0000\u0000ab\u0003\u0014\n\u0000bc\u0005"+
		"\u0005\u0000\u0000cg\u0005\b\u0000\u0000df\u0003\u0002\u0001\u0000ed\u0001"+
		"\u0000\u0000\u0000fi\u0001\u0000\u0000\u0000ge\u0001\u0000\u0000\u0000"+
		"gh\u0001\u0000\u0000\u0000hj\u0001\u0000\u0000\u0000ig\u0001\u0000\u0000"+
		"\u0000jt\u0005\t\u0000\u0000kl\u0005\n\u0000\u0000lp\u0005\b\u0000\u0000"+
		"mo\u0003\u0002\u0001\u0000nm\u0001\u0000\u0000\u0000or\u0001\u0000\u0000"+
		"\u0000pn\u0001\u0000\u0000\u0000pq\u0001\u0000\u0000\u0000qs\u0001\u0000"+
		"\u0000\u0000rp\u0001\u0000\u0000\u0000su\u0005\t\u0000\u0000tk\u0001\u0000"+
		"\u0000\u0000tu\u0001\u0000\u0000\u0000u\u000b\u0001\u0000\u0000\u0000"+
		"vw\u0005\u000b\u0000\u0000wx\u0005\u0004\u0000\u0000xy\u0003\u0012\t\u0000"+
		"yz\u0005\u0005\u0000\u0000z~\u0005\b\u0000\u0000{}\u0003\u0002\u0001\u0000"+
		"|{\u0001\u0000\u0000\u0000}\u0080\u0001\u0000\u0000\u0000~|\u0001\u0000"+
		"\u0000\u0000~\u007f\u0001\u0000\u0000\u0000\u007f\u0081\u0001\u0000\u0000"+
		"\u0000\u0080~\u0001\u0000\u0000\u0000\u0081\u0082\u0005\t\u0000\u0000"+
		"\u0082\r\u0001\u0000\u0000\u0000\u0083\u0084\u0005\f\u0000\u0000\u0084"+
		"\u0085\u0005\u0004\u0000\u0000\u0085\u0086\u0003\u0014\n\u0000\u0086\u0087"+
		"\u0005\u0005\u0000\u0000\u0087\u008b\u0005\b\u0000\u0000\u0088\u008a\u0003"+
		"\u0002\u0001\u0000\u0089\u0088\u0001\u0000\u0000\u0000\u008a\u008d\u0001"+
		"\u0000\u0000\u0000\u008b\u0089\u0001\u0000\u0000\u0000\u008b\u008c\u0001"+
		"\u0000\u0000\u0000\u008c\u008e\u0001\u0000\u0000\u0000\u008d\u008b\u0001"+
		"\u0000\u0000\u0000\u008e\u008f\u0005\t\u0000\u0000\u008f\u000f\u0001\u0000"+
		"\u0000\u0000\u0090\u0091\u0005\r\u0000\u0000\u0091\u0092\u0005\u0004\u0000"+
		"\u0000\u0092\u0093\u0003\u0004\u0002\u0000\u0093\u0094\u0005=\u0000\u0000"+
		"\u0094\u0095\u0003\u0014\n\u0000\u0095\u0096\u0005=\u0000\u0000\u0096"+
		"\u0097\u0003\u0004\u0002\u0000\u0097\u0098\u0005\u0005\u0000\u0000\u0098"+
		"\u009c\u0005\b\u0000\u0000\u0099\u009b\u0003\u0002\u0001\u0000\u009a\u0099"+
		"\u0001\u0000\u0000\u0000\u009b\u009e\u0001\u0000\u0000\u0000\u009c\u009a"+
		"\u0001\u0000\u0000\u0000\u009c\u009d\u0001\u0000\u0000\u0000\u009d\u009f"+
		"\u0001\u0000\u0000\u0000\u009e\u009c\u0001\u0000\u0000\u0000\u009f\u00a0"+
		"\u0005\t\u0000\u0000\u00a0\u0011\u0001\u0000\u0000\u0000\u00a1\u00a2\u0006"+
		"\t\uffff\uffff\u0000\u00a2\u00ab\u0005:\u0000\u0000\u00a3\u00ab\u0005"+
		";\u0000\u0000\u00a4\u00ab\u0005\u000e\u0000\u0000\u00a5\u00ab\u0005\u000f"+
		"\u0000\u0000\u00a6\u00ab\u00059\u0000\u0000\u00a7\u00a8\u0005\u0017\u0000"+
		"\u0000\u00a8\u00ab\u0003\u0012\t\u0002\u00a9\u00ab\u0003$\u0012\u0000"+
		"\u00aa\u00a1\u0001\u0000\u0000\u0000\u00aa\u00a3\u0001\u0000\u0000\u0000"+
		"\u00aa\u00a4\u0001\u0000\u0000\u0000\u00aa\u00a5\u0001\u0000\u0000\u0000"+
		"\u00aa\u00a6\u0001\u0000\u0000\u0000\u00aa\u00a7\u0001\u0000\u0000\u0000"+
		"\u00aa\u00a9\u0001\u0000\u0000\u0000\u00ab\u00b7\u0001\u0000\u0000\u0000"+
		"\u00ac\u00ad\n\u0005\u0000\u0000\u00ad\u00ae\u0007\u0000\u0000\u0000\u00ae"+
		"\u00b6\u0003\u0012\t\u0006\u00af\u00b0\n\u0004\u0000\u0000\u00b0\u00b1"+
		"\u0005\u0015\u0000\u0000\u00b1\u00b6\u0003\u0012\t\u0005\u00b2\u00b3\n"+
		"\u0003\u0000\u0000\u00b3\u00b4\u0005\u0016\u0000\u0000\u00b4\u00b6\u0003"+
		"\u0012\t\u0004\u00b5\u00ac\u0001\u0000\u0000\u0000\u00b5\u00af\u0001\u0000"+
		"\u0000\u0000\u00b5\u00b2\u0001\u0000\u0000\u0000\u00b6\u00b9\u0001\u0000"+
		"\u0000\u0000\u00b7\u00b5\u0001\u0000\u0000\u0000\u00b7\u00b8\u0001\u0000"+
		"\u0000\u0000\u00b8\u0013\u0001\u0000\u0000\u0000\u00b9\u00b7\u0001\u0000"+
		"\u0000\u0000\u00ba\u00bb\u0006\n\uffff\uffff\u0000\u00bb\u00bc\u0003\u0012"+
		"\t\u0000\u00bc\u00bd\u0007\u0001\u0000\u0000\u00bd\u00be\u0003\u0012\t"+
		"\u0000\u00be\u00c7\u0001\u0000\u0000\u0000\u00bf\u00c0\u0003\u0012\t\u0000"+
		"\u00c0\u00c1\u0007\u0002\u0000\u0000\u00c1\u00c2\u0005;\u0000\u0000\u00c2"+
		"\u00c7\u0001\u0000\u0000\u0000\u00c3\u00c4\u0005\u0017\u0000\u0000\u00c4"+
		"\u00c7\u0003\u0014\n\u0002\u00c5\u00c7\u0005\u001e\u0000\u0000\u00c6\u00ba"+
		"\u0001\u0000\u0000\u0000\u00c6\u00bf\u0001\u0000\u0000\u0000\u00c6\u00c3"+
		"\u0001\u0000\u0000\u0000\u00c6\u00c5\u0001\u0000\u0000\u0000\u00c7\u00d0"+
		"\u0001\u0000\u0000\u0000\u00c8\u00c9\n\u0004\u0000\u0000\u00c9\u00ca\u0005"+
		"\u0015\u0000\u0000\u00ca\u00cf\u0003\u0014\n\u0005\u00cb\u00cc\n\u0003"+
		"\u0000\u0000\u00cc\u00cd\u0005\u0016\u0000\u0000\u00cd\u00cf\u0003\u0014"+
		"\n\u0004\u00ce\u00c8\u0001\u0000\u0000\u0000\u00ce\u00cb\u0001\u0000\u0000"+
		"\u0000\u00cf\u00d2\u0001\u0000\u0000\u0000\u00d0\u00ce\u0001\u0000\u0000"+
		"\u0000\u00d0\u00d1\u0001\u0000\u0000\u0000\u00d1\u0015\u0001\u0000\u0000"+
		"\u0000\u00d2\u00d0\u0001\u0000\u0000\u0000\u00d3\u00d4\u0005\u001f\u0000"+
		"\u0000\u00d4\u00d5\u00059\u0000\u0000\u00d5\u00d9\u0005\u0004\u0000\u0000"+
		"\u00d6\u00d7\u00059\u0000\u0000\u00d7\u00d8\u0005 \u0000\u0000\u00d8\u00da"+
		"\u00059\u0000\u0000\u00d9\u00d6\u0001\u0000\u0000\u0000\u00d9\u00da\u0001"+
		"\u0000\u0000\u0000\u00da\u00db\u0001\u0000\u0000\u0000\u00db\u00dc\u0005"+
		"\u0005\u0000\u0000\u00dc\u00dd\u0005\b\u0000\u0000\u00dd\u00de\u0003\u0002"+
		"\u0001\u0000\u00de\u00df\u0005\t\u0000\u0000\u00df\u0017\u0001\u0000\u0000"+
		"\u0000\u00e0\u00e1\u00059\u0000\u0000\u00e1\u00ea\u0005\u0004\u0000\u0000"+
		"\u00e2\u00e7\u0003\u0012\t\u0000\u00e3\u00e4\u0005 \u0000\u0000\u00e4"+
		"\u00e6\u0003\u0012\t\u0000\u00e5\u00e3\u0001\u0000\u0000\u0000\u00e6\u00e9"+
		"\u0001\u0000\u0000\u0000\u00e7\u00e5\u0001\u0000\u0000\u0000\u00e7\u00e8"+
		"\u0001\u0000\u0000\u0000\u00e8\u00eb\u0001\u0000\u0000\u0000\u00e9\u00e7"+
		"\u0001\u0000\u0000\u0000\u00ea\u00e2\u0001\u0000\u0000\u0000\u00ea\u00eb"+
		"\u0001\u0000\u0000\u0000\u00eb\u00ec\u0001\u0000\u0000\u0000\u00ec\u00ed"+
		"\u0005\u0005\u0000\u0000\u00ed\u0019\u0001\u0000\u0000\u0000\u00ee\u00ef"+
		"\u0005!\u0000\u0000\u00ef\u00f2\u00059\u0000\u0000\u00f0\u00f1\u0005\""+
		"\u0000\u0000\u00f1\u00f3\u00059\u0000\u0000\u00f2\u00f0\u0001\u0000\u0000"+
		"\u0000\u00f2\u00f3\u0001\u0000\u0000\u0000\u00f3\u00f4\u0001\u0000\u0000"+
		"\u0000\u00f4\u00f9\u0005\b\u0000\u0000\u00f5\u00f8\u0003\u0004\u0002\u0000"+
		"\u00f6\u00f8\u0003\u001c\u000e\u0000\u00f7\u00f5\u0001\u0000\u0000\u0000"+
		"\u00f7\u00f6\u0001\u0000\u0000\u0000\u00f8\u00fb\u0001\u0000\u0000\u0000"+
		"\u00f9\u00f7\u0001\u0000\u0000\u0000\u00f9\u00fa\u0001\u0000\u0000\u0000"+
		"\u00fa\u00fc\u0001\u0000\u0000\u0000\u00fb\u00f9\u0001\u0000\u0000\u0000"+
		"\u00fc\u00fd\u0005\t\u0000\u0000\u00fd\u001b\u0001\u0000\u0000\u0000\u00fe"+
		"\u00ff\u0005\u001f\u0000\u0000\u00ff\u0100\u00059\u0000\u0000\u0100\u0104"+
		"\u0005\u0004\u0000\u0000\u0101\u0102\u00059\u0000\u0000\u0102\u0103\u0005"+
		" \u0000\u0000\u0103\u0105\u00059\u0000\u0000\u0104\u0101\u0001\u0000\u0000"+
		"\u0000\u0104\u0105\u0001\u0000\u0000\u0000\u0105\u0106\u0001\u0000\u0000"+
		"\u0000\u0106\u0107\u0005\u0005\u0000\u0000\u0107\u0108\u0005\b\u0000\u0000"+
		"\u0108\u0109\u0003\u0002\u0001\u0000\u0109\u010a\u0005\t\u0000\u0000\u010a"+
		"\u001d\u0001\u0000\u0000\u0000\u010b\u010c\u0005#\u0000\u0000\u010c\u010d"+
		"\u00059\u0000\u0000\u010d\u010e\u0005\u0004\u0000\u0000\u010e\u010f\u0005"+
		"\u0005\u0000\u0000\u010f\u001f\u0001\u0000\u0000\u0000\u0110\u0111\u0005"+
		"9\u0000\u0000\u0111\u0112\u0005$\u0000\u0000\u0112\u0113\u00059\u0000"+
		"\u0000\u0113!\u0001\u0000\u0000\u0000\u0114\u0115\u0005%\u0000\u0000\u0115"+
		"\u0116\u00059\u0000\u0000\u0116\u0117\u0005&\u0000\u0000\u0117\u0118\u0005"+
		":\u0000\u0000\u0118\u0119\u0005\'\u0000\u0000\u0119\u011a\u0005\u0002"+
		"\u0000\u0000\u011a\u0123\u0005\b\u0000\u0000\u011b\u0120\u0003\u0012\t"+
		"\u0000\u011c\u011d\u0005 \u0000\u0000\u011d\u011f\u0003\u0012\t\u0000"+
		"\u011e\u011c\u0001\u0000\u0000\u0000\u011f\u0122\u0001\u0000\u0000\u0000"+
		"\u0120\u011e\u0001\u0000\u0000\u0000\u0120\u0121\u0001\u0000\u0000\u0000"+
		"\u0121\u0124\u0001\u0000\u0000\u0000\u0122\u0120\u0001\u0000\u0000\u0000"+
		"\u0123\u011b\u0001\u0000\u0000\u0000\u0123\u0124\u0001\u0000\u0000\u0000"+
		"\u0124\u0125\u0001\u0000\u0000\u0000\u0125\u0126\u0005\t\u0000\u0000\u0126"+
		"#\u0001\u0000\u0000\u0000\u0127\u0128\u00059\u0000\u0000\u0128\u0129\u0005"+
		"&\u0000\u0000\u0129\u012a\u0003\u0012\t\u0000\u012a\u012b\u0005\'\u0000"+
		"\u0000\u012b%\u0001\u0000\u0000\u0000\u012c\u012d\u0005(\u0000\u0000\u012d"+
		"\u012e\u0005\u0004\u0000\u0000\u012e\u012f\u0003\u0012\t\u0000\u012f\u0130"+
		"\u0005\u0005\u0000\u0000\u0130\u0134\u0005\b\u0000\u0000\u0131\u0133\u0003"+
		"(\u0014\u0000\u0132\u0131\u0001\u0000\u0000\u0000\u0133\u0136\u0001\u0000"+
		"\u0000\u0000\u0134\u0132\u0001\u0000\u0000\u0000\u0134\u0135\u0001\u0000"+
		"\u0000\u0000\u0135\u0143\u0001\u0000\u0000\u0000\u0136\u0134\u0001\u0000"+
		"\u0000\u0000\u0137\u0141\u0005)\u0000\u0000\u0138\u0142\u0003\u0002\u0001"+
		"\u0000\u0139\u013d\u0005\b\u0000\u0000\u013a\u013c\u0003\u0002\u0001\u0000"+
		"\u013b\u013a\u0001\u0000\u0000\u0000\u013c\u013f\u0001\u0000\u0000\u0000"+
		"\u013d\u013b\u0001\u0000\u0000\u0000\u013d\u013e\u0001\u0000\u0000\u0000"+
		"\u013e\u0140\u0001\u0000\u0000\u0000\u013f\u013d\u0001\u0000\u0000\u0000"+
		"\u0140\u0142\u0005\t\u0000\u0000\u0141\u0138\u0001\u0000\u0000\u0000\u0141"+
		"\u0139\u0001\u0000\u0000\u0000\u0142\u0144\u0001\u0000\u0000\u0000\u0143"+
		"\u0137\u0001\u0000\u0000\u0000\u0143\u0144\u0001\u0000\u0000\u0000\u0144"+
		"\u0145\u0001\u0000\u0000\u0000\u0145\u0146\u0005\t\u0000\u0000\u0146\'"+
		"\u0001\u0000\u0000\u0000\u0147\u0148\u0005*\u0000\u0000\u0148\u0149\u0003"+
		"\u0012\t\u0000\u0149\u014d\u0005+\u0000\u0000\u014a\u014c\u0003\u0002"+
		"\u0001\u0000\u014b\u014a\u0001\u0000\u0000\u0000\u014c\u014f\u0001\u0000"+
		"\u0000\u0000\u014d\u014b\u0001\u0000\u0000\u0000\u014d\u014e\u0001\u0000"+
		"\u0000\u0000\u014e)\u0001\u0000\u0000\u0000\u014f\u014d\u0001\u0000\u0000"+
		"\u0000\u0150\u0151\u0005,\u0000\u0000\u0151+\u0001\u0000\u0000\u0000\u0152"+
		"\u0153\u0005-\u0000\u0000\u0153-\u0001\u0000\u0000\u0000\u0154\u0155\u0005"+
		".\u0000\u0000\u0155\u0156\u00059\u0000\u0000\u0156\u0157\u0005/\u0000"+
		"\u0000\u0157\u0161\u0003\u0012\t\u0000\u0158\u0159\u00050\u0000\u0000"+
		"\u0159\u015a\u00059\u0000\u0000\u015a\u015b\u00051\u0000\u0000\u015b\u0161"+
		"\u0003\u0012\t\u0000\u015c\u015d\u00052\u0000\u0000\u015d\u0161\u0005"+
		"9\u0000\u0000\u015e\u015f\u00053\u0000\u0000\u015f\u0161\u00059\u0000"+
		"\u0000\u0160\u0154\u0001\u0000\u0000\u0000\u0160\u0158\u0001\u0000\u0000"+
		"\u0000\u0160\u015c\u0001\u0000\u0000\u0000\u0160\u015e\u0001\u0000\u0000"+
		"\u0000\u0161/\u0001\u0000\u0000\u0000\u0162\u0163\u00054\u0000\u0000\u0163"+
		"\u0164\u0005\u0004\u0000\u0000\u0164\u0165\u0003\u0012\t\u0000\u0165\u0166"+
		"\u0005 \u0000\u0000\u0166\u0167\u0003\u0012\t\u0000\u0167\u0168\u0005"+
		"\u0005\u0000\u0000\u0168\u017f\u0001\u0000\u0000\u0000\u0169\u016a\u0005"+
		"5\u0000\u0000\u016a\u016b\u0005\u0004\u0000\u0000\u016b\u016c\u0003\u0012"+
		"\t\u0000\u016c\u016d\u0005 \u0000\u0000\u016d\u016e\u0003\u0012\t\u0000"+
		"\u016e\u016f\u0005\u0005\u0000\u0000\u016f\u017f\u0001\u0000\u0000\u0000"+
		"\u0170\u0171\u00056\u0000\u0000\u0171\u0172\u0005\u0004\u0000\u0000\u0172"+
		"\u0173\u0003\u0012\t\u0000\u0173\u0174\u0005 \u0000\u0000\u0174\u0175"+
		"\u0003\u0012\t\u0000\u0175\u0176\u0005\u0005\u0000\u0000\u0176\u017f\u0001"+
		"\u0000\u0000\u0000\u0177\u0178\u00057\u0000\u0000\u0178\u0179\u0005\u0004"+
		"\u0000\u0000\u0179\u017a\u0003\u0012\t\u0000\u017a\u017b\u0005 \u0000"+
		"\u0000\u017b\u017c\u0003\u0012\t\u0000\u017c\u017d\u0005\u0005\u0000\u0000"+
		"\u017d\u017f\u0001\u0000\u0000\u0000\u017e\u0162\u0001\u0000\u0000\u0000"+
		"\u017e\u0169\u0001\u0000\u0000\u0000\u017e\u0170\u0001\u0000\u0000\u0000"+
		"\u017e\u0177\u0001\u0000\u0000\u0000\u017f1\u0001\u0000\u0000\u0000\u0180"+
		"\u0181\u00058\u0000\u0000\u0181\u0182\u0005;\u0000\u0000\u01823\u0001"+
		"\u0000\u0000\u0000\u001e7Ogpt~\u008b\u009c\u00aa\u00b5\u00b7\u00c6\u00ce"+
		"\u00d0\u00d9\u00e7\u00ea\u00f2\u00f7\u00f9\u0104\u0120\u0123\u0134\u013d"+
		"\u0141\u0143\u014d\u0160\u017e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}