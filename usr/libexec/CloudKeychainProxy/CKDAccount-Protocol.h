//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

@protocol CKDAccount
- (int)syncWithAllPeers:(id *)arg1;
- (NSSet *)syncWithPeers:(NSSet *)arg1 backups:(NSSet *)arg2 error:(id *)arg3;
- (_Bool)ensurePeerRegistration:(id *)arg1;
- (NSSet *)keysChanged:(NSDictionary *)arg1 error:(id *)arg2;
@end
