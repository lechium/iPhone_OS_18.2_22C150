//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MapsUGCEnvironmentSectionController : NSObject
{
    NSDictionary *_environmentURLs;	// 8 = 0x8
    unsigned long long _submissionURL;	// 16 = 0x10
    unsigned long long _lookupURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005ada5f
@property(nonatomic) unsigned long long lookupURL; // @synthesize lookupURL=_lookupURL;
@property(nonatomic) unsigned long long submissionURL; // @synthesize submissionURL=_submissionURL;
@property(retain, nonatomic) NSDictionary *environmentURLs; // @synthesize environmentURLs=_environmentURLs;
- (_Bool)environmentIsSelectedWithBaseURL:(id)arg1 submissionURL:(id)arg2 lookupURL:(id)arg3;	// IMP=0x00100000005ad9a7
- (id)selectedEnvironmentURLWithSubmissionURL:(id)arg1 lookupURL:(id)arg2;	// IMP=0x00100000005ad7c9
- (void)appendEnvironmentSectionToDebugController:(id)arg1;	// IMP=0x00100000005ad1a6
- (id)initWithSubmissionURL:(unsigned long long)arg1 lookupURL:(unsigned long long)arg2;	// IMP=0x00100000005ad07f

@end

