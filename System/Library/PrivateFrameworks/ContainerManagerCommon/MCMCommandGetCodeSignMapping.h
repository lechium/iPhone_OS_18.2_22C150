//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMCommandGetCodeSignMapping
{
    NSString *_identifier;	// 8 = 0x8
}

+ (Class)incomingMessageClass;	// IMP=0x00100000000a4096
+ (unsigned long long)command;	// IMP=0x00100000000a406a
- (void).cxx_destruct;	// IMP=0x00000000000a4036
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)execute;	// IMP=0x00000000000a3de2
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000a3d4e
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x00000000000a3c92

@end
