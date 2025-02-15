//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHandwriting/NSObject-Protocol.h>

@class CHEncodedStrokeIdentifier, CHTokenizedResult, NSArray, NSOrderedSet, NSSet;
@protocol CHStroke, CHStrokeIdentifier, CHStrokeProviderVersion;

@protocol CHStrokeProvider <NSObject>
@property(readonly) long long groupingPriority;
@property(readonly, copy) NSArray *orderedStrokes;
@property(readonly) id <CHStrokeProviderVersion> strokeProviderVersion;
- (id <CHStrokeIdentifier>)strokeIdentifierFromData:(CHEncodedStrokeIdentifier *)arg1;
- (CHEncodedStrokeIdentifier *)encodedStrokeIdentifier:(id <CHStrokeIdentifier>)arg1;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg1 toStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg1 toStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (id <CHStroke>)strokeForIdentifier:(id <CHStrokeIdentifier>)arg1;

@optional
@property(readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSOrderedSet",?,R,C

@property(readonly) struct CGSize drawingCanvasSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R

- (long long)compareOrderOfStroke:(id <CHStroke>)arg1 toStroke:(id <CHStroke>)arg2;
- (NSSet *)cachedTranscriptionsIntersectingStrokeGroup:(NSSet *)arg1;
- (CHTokenizedResult *)cachedTranscriptionForStrokeGroup:(NSSet *)arg1;
- (_Bool)isStroke:(id <CHStroke>)arg1 versionOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (_Bool)isValidStrokeIdentifier:(id <CHStrokeIdentifier>)arg1;
@end

