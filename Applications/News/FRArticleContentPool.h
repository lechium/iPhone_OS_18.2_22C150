//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, MISSING_TYPE, NSCountedSet, NSMutableDictionary;
@protocol FRFlintDataProviderFactory;

@interface FRArticleContentPool : NSObject
{
    FCCloudContext *_context;	// 8 = 0x8
    id <FRFlintDataProviderFactory> _dataProviderFactory;	// 16 = 0x10
    NSMutableDictionary *_pool;	// 24 = 0x18
    unsigned long long _highWaterMark;	// 32 = 0x20
    NSCountedSet *_interests;	// 40 = 0x28
    NSMutableDictionary *_accessDates;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000035613
@property(retain, nonatomic) NSMutableDictionary *accessDates; // @synthesize accessDates=_accessDates;
@property(retain, nonatomic) NSCountedSet *interests; // @synthesize interests=_interests;
@property(nonatomic) unsigned long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property(retain, nonatomic) NSMutableDictionary *pool; // @synthesize pool=_pool;
@property(readonly, nonatomic) id <FRFlintDataProviderFactory> dataProviderFactory; // @synthesize dataProviderFactory=_dataProviderFactory;
@property(readonly, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void)_flushIfNeeded;	// IMP=0x00100000000350cf
- (id)_createEntryForHeadline:(id)arg1;	// IMP=0x0010000000034f63
- (void)_fetchEntryForHeadline:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034be3
- (id)_entryForHeadline:(id)arg1;	// IMP=0x0010000000034a65
- (void)flushContentWithArticleID:(id)arg1;	// IMP=0x00100000000349e8
- (void)fetchFlintDataProviderForHeadline:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000348fe
- (id)flintDataProviderForHeadline:(id)arg1;	// IMP=0x001000000003485f
- (void)fetchContentForHeadline:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034775
- (id)contentForHeadline:(id)arg1;	// IMP=0x00100000000346de
- (void)removeInterestInArticleWithID:(id)arg1;	// IMP=0x00100000000345f5
- (void)addInterestInArticleWithID:(id)arg1;	// IMP=0x00100000000344a0
- (MISSING_TYPE *)initWithCloudContext:dataProviderFactory: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000343bb

@end

