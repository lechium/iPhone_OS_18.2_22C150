//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView : UIView
{
    UIView *_subview;	// 160 = 0xa0
    int _resizingMask;	// 168 = 0xa8
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;	// 172 = 0xac
}

- (void).cxx_destruct;	// IMP=0x00000000004cbeff
- (void)layoutSubviews;	// IMP=0x00000000004cbeed
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000004cbe9b
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000004cbe49
- (void)enforceSubviewAtBottomIfNecessary;	// IMP=0x00000000004cbd6c
- (void)willRemoveSubview:(id)arg1;	// IMP=0x00000000004cbd5a
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x00000000004cbd48
- (void)_uncontainerSubview:(id)arg1;	// IMP=0x00000000004cbcf9
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x00000000004cbc2d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000004cbbc7
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000004cbb98

@end

