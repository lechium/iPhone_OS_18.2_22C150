//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class UIAlertAction;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController
{
    UIAlertAction *_cancelAction;	// 8 = 0x8
    _Bool _cancelsWhenAppEntersBackground;	// 16 = 0x10
}

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00600000000b46fb
- (void).cxx_destruct;	// IMP=0x00000000000b5383
@property(nonatomic) _Bool cancelsWhenAppEntersBackground; // @synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground;
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x00000000000b5287
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000b51d0

@end

