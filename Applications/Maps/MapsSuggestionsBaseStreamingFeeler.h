//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsBaseStreamingFeeler
{
}

- (_Bool)updateSignals;	// IMP=0x0020000000d1f079
- (_Bool)stopUpdatingSignals;	// IMP=0x0010000000d1f063
- (_Bool)startUpdatingSignals;	// IMP=0x0010000000d1f04d
- (long long)disposition;	// IMP=0x0010000000d1f042

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

