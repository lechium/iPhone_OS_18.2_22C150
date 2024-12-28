//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SecureStorageMock : NSObject
{
}

- (void)aclForKey:(long long)arg1 contextUUID:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0020000000012673
- (void)aclForKey:(long long)arg1 contextUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000125d9
- (void)removeObjectForKey:(long long)arg1 contextUUID:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012573
- (void)removeObjectForKey:(long long)arg1 contextUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000124d9
- (void)objectForKey:(long long)arg1 contextUUID:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012473
- (void)objectForKey:(long long)arg1 contextUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000123d9
- (void)setObject:(id)arg1 acl:(id)arg2 forKey:(long long)arg3 contextUUID:(id)arg4 connection:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000012372
- (void)setObject:(id)arg1 acl:(id)arg2 forKey:(long long)arg3 contextUUID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000012292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
