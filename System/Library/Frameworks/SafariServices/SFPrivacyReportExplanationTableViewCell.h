//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UITextView;
@protocol SFPrivacyReportExplanationTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell
{
    UITextView *_textLabel;	// 8 = 0x8
    _Bool _wideLayout;	// 16 = 0x10
    _Bool _expanded;	// 17 = 0x11
    id <SFPrivacyReportExplanationTableViewCellDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009c6c7
@property(nonatomic) __weak id <SFPrivacyReportExplanationTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x000000000009c675
- (void)privacyProxyStateChanged:(id)arg1;	// IMP=0x000000000009c5a8
- (struct CGRect)_separatorFrame;	// IMP=0x000000000009c58a
- (void)_toggleExpanded:(id)arg1;	// IMP=0x000000000009c516
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000009bb43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
