//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKPopupAnnotation, UITextView;
@protocol AKNoteEditorViewControllerDelegate;

@interface AKNoteEditorViewController : UIViewController
{
    UITextView *_textView;	// 8 = 0x8
    AKPopupAnnotation *_annotation;	// 16 = 0x10
    id <AKNoteEditorViewControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000064b5b
@property(nonatomic) __weak id <AKNoteEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AKPopupAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000064a6c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000649c8
- (void)viewDidLoad;	// IMP=0x000000000006488c

@end

