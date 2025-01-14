//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface _TVRUIAvatarGenerator : NSObject
{
    id <CNCancelable> _avatarRenderer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004b40c
@property(retain, nonatomic) id <CNCancelable> avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
- (id)_initialsFromName:(id)arg1;	// IMP=0x000000000004b203
- (void)generateAvatarForText:(id)arg1 size:(struct CGSize)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004af28
- (void)generateAvatarForName:(id)arg1 size:(struct CGSize)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ae80
- (id)init;	// IMP=0x000000000004ae51

@end

