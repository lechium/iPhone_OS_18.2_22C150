//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugIssueReport : NSObject
{
    NSMutableArray *_mutableIssues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000acef7b
- (void)addIssue:(id)arg1;	// IMP=0x0000000000aceec2
@property(readonly, copy, nonatomic) NSArray *issues;
- (id)init;	// IMP=0x0000000000acee4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
