//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol CNContactListLimitedAccessTipViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListLimitedAccessTipView : UIView
{
    id <CNContactListLimitedAccessTipViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000024750a
@property(nonatomic) __weak id <CNContactListLimitedAccessTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapLearnMore;	// IMP=0x00000000002474d7
- (void)didTapDismiss;	// IMP=0x000000000024748b
- (id)initWithAppName:(id)arg1 isLimited:(_Bool)arg2;	// IMP=0x0000000000246445

@end
