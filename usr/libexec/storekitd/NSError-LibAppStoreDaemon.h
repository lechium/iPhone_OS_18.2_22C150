//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSNumber, NSString;

@interface NSError (LibAppStoreDaemon)
- (void)lib_walkUnderlyingErrorsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000009909d
- (id)lib_addUserInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000098f60
- (id)lib_addRecoveryOptions:(id)arg1;	// IMP=0x0010000000098ded
@property(readonly) NSString *lib_serverDialogID;
@property(readonly) NSString *lib_shortDescription;
@property(readonly) NSString *lib_sanitizedDescription;
@property(readonly) NSNumber *lib_coordinatorOwnerID;
- (id)initWithOctaneSimulatedError:(long long)arg1;	// IMP=0x00100000000ef6b4
- (id)toASDErrorWithMetadata:(id)arg1;	// IMP=0x001000000011a814
@end
