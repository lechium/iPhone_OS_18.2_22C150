//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineStore, NSString;

@interface CPLStoreMigrationAssistant_107137447 : NSObject
{
    CPLEngineStore *_store;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001af882
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
- (id)redactedDescription;	// IMP=0x00100000001af866
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *migrationDescription;
- (_Bool)performMigrationWithError:(id *)arg1;	// IMP=0x00100000001af375
- (id)initWithStore:(id)arg1;	// IMP=0x00100000001af30a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
