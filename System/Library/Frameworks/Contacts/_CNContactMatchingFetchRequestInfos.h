//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

__attribute__((visibility("hidden")))
@interface _CNContactMatchingFetchRequestInfos : NSObject
{
    NSPredicate *_predicate;	// 8 = 0x8
    NSArray *_properties;	// 16 = 0x10
}

+ (id)fetchRequestInfoForPredicate:(id)arg1 properties:(id)arg2;	// IMP=0x006000000012d607
- (void).cxx_destruct;	// IMP=0x000000000012d6c5
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;

@end

