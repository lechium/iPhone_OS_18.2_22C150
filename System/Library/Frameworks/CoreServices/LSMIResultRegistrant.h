//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSUUID;
@protocol LSMIResultRegistrantStrategy;

__attribute__((visibility("hidden")))
@interface LSMIResultRegistrant : NSObject
{
    id <LSMIResultRegistrantStrategy> _strategy;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSDictionary *_miDict;	// 24 = 0x18
    NSSet *_personas;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016a237
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000168d14
- (void)runPostProcessingForBundleID:(id)arg1 success:(_Bool)arg2 isSystemApp:(_Bool)arg3 isPlaceholder:(_Bool)arg4 registeredBothFullAppAndPlaceholder:(_Bool)arg5 notificationJournaller:(id)arg6;	// IMP=0x0000000000168b29
- (void)_replyWithError:(id)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000168a65
- (id)initWithContext:(id)arg1 operationUUID:(id)arg2 itemInfoDict:(id)arg3 personas:(id)arg4;	// IMP=0x000000000016892b

@end

