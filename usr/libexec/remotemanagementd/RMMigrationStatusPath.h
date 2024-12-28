//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RMMigrationStatusPath : NSObject
{
}

- (_Bool)_moveDirectoryFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000066843
- (id)_transformName:(id)arg1;	// IMP=0x0010000000066698
- (id)_configurationTypePrefixes;	// IMP=0x00100000000661f8
- (void)_migrateURL:(id)arg1;	// IMP=0x0010000000065d5b
- (_Bool)_migrateStatusDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000065a83
- (_Bool)executeReturningError:(id *)arg1;	// IMP=0x0010000000065966
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
