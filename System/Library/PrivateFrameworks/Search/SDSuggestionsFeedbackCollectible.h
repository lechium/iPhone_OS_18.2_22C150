//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SDSuggestionsFeedbackCollectible : NSObject
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001f1d3
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)dataCollectionBundle;	// IMP=0x000000000001f1b5
- (_Bool)serializeToJSON:(void *)arg1 valuesOnly:(_Bool)arg2;	// IMP=0x000000000001f072
- (id)initWithSuggestionsData:(id)arg1;	// IMP=0x000000000001efff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

