//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CNAvatarView, CNContact;

__attribute__((visibility("hidden")))
@interface CNContactNavBarAvatarView : UIView
{
    _Bool _showing;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    CNAvatarView *_avatarView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000028967e
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000289542
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002892de

@end

