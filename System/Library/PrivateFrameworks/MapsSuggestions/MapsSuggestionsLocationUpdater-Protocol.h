//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation;
@protocol MapsSuggestionsLocationUpdaterDelegate;

@protocol MapsSuggestionsLocationUpdater <MapsSuggestionsObject>
- (CLLocation *)restartLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
- (void)stopLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
- (CLLocation *)startLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
@end

