//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol DOCTabbedBrowserViewDelegate;

@interface DOCTabbedBrowserView : UIView
{
    id <DOCTabbedBrowserViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000015fb9
@property __weak id <DOCTabbedBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToWindow;	// IMP=0x0010000000015eb6
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0010000000015de7

@end

