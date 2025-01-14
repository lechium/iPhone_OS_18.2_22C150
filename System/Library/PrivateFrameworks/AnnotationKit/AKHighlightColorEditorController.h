//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCalloutBar, NSString, UIAlertController, UIButton, UIView;

@interface AKHighlightColorEditorController
{
    AKCalloutBar *mCalloutBar;	// 56 = 0x38
    UIView *mColorControls;	// 64 = 0x40
    UIButton *mAddNoteButton;	// 72 = 0x48
    UIButton *mDeleteButton;	// 80 = 0x50
    UIButton *mRightArrowButton;	// 88 = 0x58
    UIButton *mShareButton;	// 96 = 0x60
    int _pageTheme;	// 104 = 0x68
    UIAlertController *_alertController;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000094624
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) int pageTheme; // @synthesize pageTheme=_pageTheme;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=mShareButton;
@property(retain, nonatomic) UIButton *rightArrowButton; // @synthesize rightArrowButton=mRightArrowButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=mDeleteButton;
@property(retain, nonatomic) UIButton *addNoteButton; // @synthesize addNoteButton=mAddNoteButton;
@property(retain, nonatomic) UIView *colorControls; // @synthesize colorControls=mColorControls;
@property(retain, nonatomic) AKCalloutBar *calloutBar; // @synthesize calloutBar=mCalloutBar;
- (id)p_noteGlyphForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000093ef8
- (id)p_monochromaticImageFromImage:(id)arg1 withColor:(id)arg2;	// IMP=0x0000000000093dab
- (id)p_paletteImageForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x00000000000938f6
- (id)p_buildPaletteImageForFrontTag:(long long)arg1 middleTag:(long long)arg2 backTag:(long long)arg3 pageTheme:(int)arg4;	// IMP=0x00000000000937e9
- (id)p_paletteImageWithFrontColor:(id)arg1 middleColor:(id)arg2 backColor:(id)arg3 frontForegroundImage:(id)arg4;	// IMP=0x00000000000935b2
- (void)p_drawCrescentWithCircleRect:(struct CGRect)arg1 color:(id)arg2 leftShift:(double)arg3 addRadius:(double)arg4;	// IMP=0x000000000009329a
- (id)p_colorControlImageForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000092d52
- (id)p_colorControlUnderlineImageForPageTheme:(int)arg1;	// IMP=0x0000000000092cc4
- (id)p_underlineForegroundImageForPageTheme:(int)arg1;	// IMP=0x0000000000092c96
- (id)p_colorControlImageForColor:(id)arg1;	// IMP=0x0000000000092c82
- (id)p_colorControlImageForColor:(id)arg1 withForegroundImage:(id)arg2;	// IMP=0x0000000000092bae
- (void)p_drawColorControlCircleWithFrame:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x0000000000092aae
- (id)p_colorForTag:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000092574
- (void)handleRightArrowButton:(id)arg1;	// IMP=0x00000000000924f6
- (void)handleDeleteButtonTap:(id)arg1;	// IMP=0x000000000009249b
- (void)handleShareButton:(id)arg1;	// IMP=0x00000000000923d8
- (void)handleAddNoteButton:(id)arg1;	// IMP=0x000000000009235a
- (void)showColorControlsMenu:(id)arg1;	// IMP=0x00000000000922b3
- (void)useColorOf:(id)arg1;	// IMP=0x0000000000092243
- (void)setDelegate:(id)arg1;	// IMP=0x000000000009219b
- (void)p_postDeleteConfirmation;	// IMP=0x0000000000091e9f
- (void)p_removeAnnotation:(id)arg1;	// IMP=0x0000000000091e34
- (void)p_setStyle:(long long)arg1 forAnnotation:(id)arg2;	// IMP=0x0000000000091d4c
- (id)p_themeForStyle:(long long)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000091d08
- (id)localizedAccessibilityStringForStyle:(long long)arg1;	// IMP=0x0000000000091b36
- (void)setPosition:(int)arg1;	// IMP=0x0000000000091b17
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;	// IMP=0x00000000000919e1
- (void)didShow;	// IMP=0x0000000000091975
- (void)willShow;	// IMP=0x0000000000091906
- (_Bool)canPresentInPosition:(int)arg1;	// IMP=0x00000000000918fb
- (void)p_updateAppearance;	// IMP=0x0000000000091778
- (long long)p_buttonTagForTheme:(id)arg1;	// IMP=0x0000000000091682
- (_Bool)p_shouldShowCompactMenu;	// IMP=0x00000000000910de
- (_Bool)p_shouldShowShareButton;	// IMP=0x0000000000091032
- (void)viewDidLoad;	// IMP=0x0000000000090478
- (void)loadView;	// IMP=0x00000000000903ff
- (void)releaseOutlets;	// IMP=0x0000000000090278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

