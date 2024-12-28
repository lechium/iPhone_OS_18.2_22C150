//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsBaseFeeler : NSObject
{
    id <MapsSuggestionsFeelerDelegate> _delegate;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)isEnabled;	// IMP=0x0020000000029057
- (void).cxx_destruct;	// IMP=0x0020000000029190
@property(readonly, copy) NSString *description;
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x00100000000290cb
- (long long)disposition;	// IMP=0x00100000000290b5
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;	// IMP=0x0010000000029035
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000028fbf
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x0010000000028ef3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
