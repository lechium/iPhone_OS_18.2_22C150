//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UIView;

@interface _TtC5TeaUI22JSONTextViewController : UIViewController
{
    MISSING_TYPE *textView;	// 8 = 0x8
    MISSING_TYPE *textParser;	// 16 = 0x10
    MISSING_TYPE *_textSize;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_searchToolbar;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_resultsBarButtonItem;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_nextTokenBarButtonItem;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_previousTokenBarButtonItem;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_doneBarButtonItem;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_textResizeBarButtonItem;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000002fe5f1
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002fe5a0
- (void)done;	// IMP=0x00000000002fe4ef
- (void)previousToken;	// IMP=0x00000000002fe4a8
- (void)nextToken;	// IMP=0x00000000002fe2a6
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) UIView *inputAccessoryView;
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002fe23a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002fe149
- (void)viewDidLoad;	// IMP=0x00000000002fde87
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fd855
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000002fef62
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000000002fe79d
- (void)willPresentSearchController:(id)arg1;	// IMP=0x00000000002fe741
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000002fe7fa
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000002febc2

@end

