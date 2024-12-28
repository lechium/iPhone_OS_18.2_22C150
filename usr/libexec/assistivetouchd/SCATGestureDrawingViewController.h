//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSTimer, SCATGestureDrawingElementManager, SCATGestureDrawingView, SCATMenu;
@protocol SCATGestureDrawingViewDelegate;

@interface SCATGestureDrawingViewController
{
    SCATMenu *_menu;	// 8 = 0x8
    _Bool _pressesOnMoveStart;	// 16 = 0x10
    _Bool _liftsOnMoveEnd;	// 17 = 0x11
    _Bool _areFingersPressed;	// 18 = 0x12
    _Bool _isRotating;	// 19 = 0x13
    _Bool _isCurving;	// 20 = 0x14
    id <SCATGestureDrawingViewDelegate> _delegate;	// 24 = 0x18
    double _angle;	// 32 = 0x20
    double _velocity;	// 40 = 0x28
    double _curvature;	// 48 = 0x30
    NSArray *_fingerPositions;	// 56 = 0x38
    NSTimer *_moveTimer;	// 64 = 0x40
    NSTimer *_generalTimer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000caebd
@property(nonatomic) _Bool isCurving; // @synthesize isCurving=_isCurving;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(retain, nonatomic) NSTimer *moveTimer; // @synthesize moveTimer=_moveTimer;
@property(retain, nonatomic) NSArray *fingerPositions; // @synthesize fingerPositions=_fingerPositions;
@property(nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool areFingersPressed; // @synthesize areFingersPressed=_areFingersPressed;
@property(nonatomic) _Bool liftsOnMoveEnd; // @synthesize liftsOnMoveEnd=_liftsOnMoveEnd;
@property(nonatomic) _Bool pressesOnMoveStart; // @synthesize pressesOnMoveStart=_pressesOnMoveStart;
@property(nonatomic) __weak id <SCATGestureDrawingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000cad87
- (_Bool)allowsDwellSelection;	// IMP=0x00100000000cad38
- (void)scannerWillMakeManagerInactive:(id)arg1 activeElementManager:(id)arg2;	// IMP=0x00100000000cace0
- (void)scannerWillMakeManagerActive:(id)arg1 forDisplayID:(unsigned int)arg2;	// IMP=0x00100000000cabdc
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00100000000caada
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000caa4e
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000ca9c2
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00100000000ca963
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00100000000ca904
- (id)_currentElementProvider;	// IMP=0x00100000000ca8a9
- (void)menuDidFinishTransition:(id)arg1;	// IMP=0x00100000000ca897
- (void)menuWillDisappear:(id)arg1;	// IMP=0x00100000000ca84b
- (void)toggleTouchForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca818
- (void)decreaseVelocityForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca7d2
- (void)increaseVelocityForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca78c
- (void)bendLeftForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca738
- (void)bendRightForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca6e4
- (void)straightenForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca6cf
- (void)rotate90ClockwiseForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca699
- (void)rotate90CounterclockwiseForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca663
- (void)rotateClockwiseForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca60f
- (void)rotateCounterclockwiseForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca5bb
- (void)bendForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca53d
- (void)rotateForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca484
- (void)stopForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca428
- (void)autoLiftToggledForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca3f5
- (void)autoPressToggledForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca3c2
- (void)moveForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca26b
- (void)moveToolbarForFreehandSheet:(id)arg1;	// IMP=0x00100000000ca213
- (void)freehandSheet:(id)arg1 didHighlightStraighten:(_Bool)arg2;	// IMP=0x00100000000ca1a7
- (void)freehandSheet:(id)arg1 didHighlightBendLeft:(_Bool)arg2;	// IMP=0x00100000000ca13b
- (void)freehandSheet:(id)arg1 didHighlightBendRight:(_Bool)arg2;	// IMP=0x00100000000ca0cf
- (void)freehandSheet:(id)arg1 didHighlightRotateCW90:(_Bool)arg2;	// IMP=0x00100000000ca00a
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(_Bool)arg2;	// IMP=0x00100000000c9f45
- (void)freehandSheet:(id)arg1 didHighlightRotateCW:(_Bool)arg2;	// IMP=0x00100000000c9ed9
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW:(_Bool)arg2;	// IMP=0x00100000000c9e6d
- (void)freehandSheet:(id)arg1 didHighlightBend:(_Bool)arg2;	// IMP=0x00100000000c9cfb
- (void)freehandSheet:(id)arg1 didHighlightRotate:(_Bool)arg2;	// IMP=0x00100000000c9bd8
- (void)freehandSheet:(id)arg1 didHighlightMove:(_Bool)arg2;	// IMP=0x00100000000c9b6e
- (void)didPopFreehandSheet:(id)arg1;	// IMP=0x00100000000c9a89
- (double)curvatureForFreehandSheet:(id)arg1;	// IMP=0x00100000000c9a77
- (double)angleForFreehandSheet:(id)arg1;	// IMP=0x00100000000c9a65
- (_Bool)isAutoLiftOnForFreehandSheet:(id)arg1;	// IMP=0x00100000000c9a53
- (_Bool)isAutoPressOnForFreehandSheet:(id)arg1;	// IMP=0x00100000000c9a41
- (_Bool)isTouchOnForFreehandSheet:(id)arg1;	// IMP=0x00100000000c9a2f
- (void)_cleanUp;	// IMP=0x00100000000c99b4
- (void)_move;	// IMP=0x00100000000c9918
- (void)_curveOnLeft:(_Bool)arg1 withCurveRadius:(double)arg2;	// IMP=0x00100000000c95ad
- (void)_moveStraight;	// IMP=0x00100000000c92d7
- (struct CGPoint)_fingerCenter;	// IMP=0x00100000000c90e0
- (void)_endMovementAndForceLift:(_Bool)arg1;	// IMP=0x00100000000c9064
- (void)_cancelMoveTimerAndEndMove:(_Bool)arg1;	// IMP=0x00100000000c8fcc
- (_Bool)_isPerformingMove;	// IMP=0x00100000000c8f99
- (void)_decreaseCurvature;	// IMP=0x00100000000c8f7f
- (void)_increaseCurvature;	// IMP=0x00100000000c8f65
- (void)_adjustCurvatureWithDirection:(double)arg1;	// IMP=0x00100000000c8e82
- (void)_rotateCounterclockwise;	// IMP=0x00100000000c8e4c
- (void)_rotateClockwise;	// IMP=0x00100000000c8e16
- (void)_endGeneralTimer;	// IMP=0x00100000000c8cf5
- (void)_startGeneralTimerWithSelector:(SEL)arg1 actionName:(id)arg2;	// IMP=0x00100000000c8c05
- (void)_uninstallStopButton;	// IMP=0x00100000000c8b1b
- (void)_installStopButtonForActionName:(id)arg1;	// IMP=0x00100000000c89ee
- (double)_previewDistance;	// IMP=0x00100000000c842d
@property(readonly, nonatomic) SCATGestureDrawingElementManager *drawingElementManager;
- (void)_pushFreehandSheetOfClass:(Class)arg1;	// IMP=0x00100000000c83b1
- (id);	// IMP=0x00100000000c839f
- (void)viewDidLoad;	// IMP=0x00100000000c82b6
- (void)loadView;	// IMP=0x00100000000c827d
- (void)orientationDidChange:(id)arg1;	// IMP=0x00100000000c826b
- (void)_updateMainViewToolbarFrame;	// IMP=0x00100000000c81b8
- (void)dealloc;	// IMP=0x00100000000c816c
- (id)initWithElementManager:(id)arg1 startingFingerPositions:(id)arg2 menu:(id)arg3;	// IMP=0x00100000000c7ed6
- (id)init;	// IMP=0x00100000000c7e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SCATGestureDrawingView *mainView;
@property(readonly) Class superclass;

@end
