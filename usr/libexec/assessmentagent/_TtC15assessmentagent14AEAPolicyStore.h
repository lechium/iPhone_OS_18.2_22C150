//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC15assessmentagent14AEAPolicyStore : _TtCs12_SwiftObject
{
    MISSING_TYPE *fileSystem;	// 16 = 0x10
}

- (_Bool)cleanUpPolicyStoreWithError:(id *)arg1;	// IMP=0x00200000000337d0
- (id)readOnlyScratchpadForIdentifier:(id)arg1;	// IMP=0x0010000000033770
- (id)writeOnlyScratchpadForIdentifier:(id)arg1;	// IMP=0x0010000000033590
@property(nonatomic, readonly) _Bool hasPersistentData;
@property(nonatomic, readonly) _Bool exists;

@end
