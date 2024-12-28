//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKPlayer.h>

@class CNContact;

@interface GKPlayer (GKPlayerTUConversationParticipant)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;	// IMP=0x002000000012f65b
+ (id)monogramQueue;	// IMP=0x002000000012dd37
+ (long long)sizeForPhotoSize:(long long)arg1;	// IMP=0x002000000012c72e
- (void)setTuParticipant:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000012b9f1
- (void)setTuParticipant:(id)arg1;	// IMP=0x001000000012b9db
- (id)tuParticipant;	// IMP=0x001000000012b9ca
- (id)initWithParticipant:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000012b921
- (void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012f6d3
- (void)clearInMemoryCachedAvatars;	// IMP=0x001000000012f4d2
- (void)_playerAvatarWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e794
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e688
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e57c
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012dd93
- (id)monogramColorIndex;	// IMP=0x001000000012db5c
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012d7a0
- (id)avatarImageRenderer;	// IMP=0x001000000012d6fb
- (id)renderingScopeForPhotoSize:(long long)arg1;	// IMP=0x001000000012d3dd
- (id)renderingScopeForPhotoSize:(long long)arg1 colorIndex:(long long)arg2;	// IMP=0x001000000012ce5e
- (id)placeholderImageWithPhotoSize:(long long)arg1;	// IMP=0x001000000012ccac
- (id)stringForMonogram;	// IMP=0x001000000012c8d5
- (id)photoURLForSize:(long long)arg1;	// IMP=0x001000000012c7ff
- (void)showConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(CDUnknownBlockType)arg4 cancelAction:(CDUnknownBlockType)arg5;	// IMP=0x001000000012c586
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;	// IMP=0x001000000012c426
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012fdd6
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012fbe9
@property(retain, nonatomic) CNContact *contact;
- (id)initWithContact:(id)arg1;	// IMP=0x001000000013cbbb
@end
