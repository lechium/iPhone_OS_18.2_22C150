//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVTAvatarStore;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAnimojiProvider : NSObject
{
    NSString *identifier;	// 8 = 0x8
    id <AVTAvatarStore> _avatarStore;	// 16 = 0x10
}

+ (id)providerItemForAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4;	// IMP=0x00100000001a59ea
+ (id)providerItemForAvatarRecord:(id)arg1;	// IMP=0x00100000001a59e2
- (void).cxx_destruct;	// IMP=0x00000000001a59ba
@property(readonly, nonatomic) id <AVTAvatarStore> avatarStore; // @synthesize avatarStore=_avatarStore;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (_Bool)canCreateMemoji;	// IMP=0x00000000001a598d
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;	// IMP=0x00000000001a5980
- (id)initWithVisualIdentity:(id)arg1 avatarStore:(id)arg2;	// IMP=0x00000000001a58ae
- (id)initWithVisualIdentity:(id)arg1;	// IMP=0x00000000001a58a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

