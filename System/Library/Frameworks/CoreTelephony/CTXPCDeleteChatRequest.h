//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CTXPCDeleteChatRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x000000000007223c
- (int)requiredEntitlement;	// IMP=0x0000000000072231
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000720e1
@property(readonly, nonatomic) NSString *chat;
- (id)initWithContext:(id)arg1 chat:(id)arg2;	// IMP=0x0000000000071f2f

@end
