//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODRServiceDelegate : NSObject
{
    NSString *_libraryPath;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSString *_legacyDatabasePath;	// 24 = 0x18
    NSString *_assetPacksPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002ab318
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000002ab156

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

