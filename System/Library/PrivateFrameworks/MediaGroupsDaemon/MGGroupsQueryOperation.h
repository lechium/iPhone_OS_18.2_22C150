//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MGGroupsQueryAgent, MGOutstandingQuery, NSDictionary;

__attribute__((visibility("hidden")))
@interface MGGroupsQueryOperation : NSOperation
{
    MGGroupsQueryAgent *_agent;	// 8 = 0x8
    MGOutstandingQuery *_query;	// 16 = 0x10
    NSDictionary *_groups;	// 24 = 0x18
    NSDictionary *_variables;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017581
@property(readonly, copy, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(readonly, copy, nonatomic) NSDictionary *groups; // @synthesize groups=_groups;
@property(readonly, copy, nonatomic) MGOutstandingQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) MGGroupsQueryAgent *agent; // @synthesize agent=_agent;
- (void)main;	// IMP=0x0000000000017202
- (id)initWithAgent:(id)arg1 query:(id)arg2 groups:(id)arg3 substitutionVariables:(id)arg4;	// IMP=0x00000000000170eb

@end
