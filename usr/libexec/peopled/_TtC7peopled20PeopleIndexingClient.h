//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC7peopled20PeopleIndexingClient : NSObject
{
    MISSING_TYPE *statusManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000024d20
- (id)init;	// IMP=0x0010000000024cc0
- (void)reindexItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 acknowledgementHandler:(void (^)(void))arg4;	// IMP=0x00100000000249a0
- (void)reindexAllItemsForBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 acknowledgementHandler:(void (^)(void))arg3;	// IMP=0x00100000000241c0
- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000023e50
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000023cb0

@end
