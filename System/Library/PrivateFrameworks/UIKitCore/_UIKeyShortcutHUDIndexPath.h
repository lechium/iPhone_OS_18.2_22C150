//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDIndexPath : NSObject
{
    id <_UIKeyShortcutHUDCollectionViewManagerClient> _client;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

+ (id)hudIndexPathWithClient:(id)arg1 indexPath:(id)arg2;	// IMP=0x0060000000819cac
- (void).cxx_destruct;	// IMP=0x0000000000819f31
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <_UIKeyShortcutHUDCollectionViewManagerClient> client; // @synthesize client=_client;
- (unsigned long long)hash;	// IMP=0x0000000000819e8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000819d34

@end
