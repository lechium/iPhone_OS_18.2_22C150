//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualTestKit/NSObject-Protocol.h>

@class NSArray, NSString, XCTestCase;
@protocol VTKAssertID, VTKStoreManagerSaveResult;

@protocol VTKStoreManager <NSObject>
@property(copy, nonatomic) NSString *itemsDirectory;
- (id <VTKStoreManagerSaveResult>)saveItems:(NSArray *)arg1 withID:(id <VTKAssertID>)arg2 testCase:(XCTestCase *)arg3;
@end

