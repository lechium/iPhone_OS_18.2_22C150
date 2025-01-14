//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MIUninstalledAppList : NSObject
{
    NSObject<OS_dispatch_queue> *_listQueue;	// 8 = 0x8
    NSMutableDictionary *_uninstalledList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x000000000005366c
- (void).cxx_destruct;	// IMP=0x0020000000053fd7
@property(retain, nonatomic) NSMutableDictionary *uninstalledList; // @synthesize uninstalledList=_uninstalledList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue; // @synthesize listQueue=_listQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x0010000000053e97
- (void)addIdentifier:(id)arg1;	// IMP=0x0010000000053d44
@property(readonly, nonatomic) NSDictionary *uninstalledDictionary;
- (void)preflightUninstalledMap;	// IMP=0x0010000000053a7a
- (void)_onQueue_setUninstalledList:(id)arg1;	// IMP=0x0010000000053891
- (id)_onQueue_uninstalledList;	// IMP=0x0010000000053783
- (id)_mapPath;	// IMP=0x00100000000536f9
- (id)init;	// IMP=0x00100000000535ea

@end

