//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class MKLocalSearchCompleter, NSError;

@protocol MKLocalSearchCompleterDelegate <NSObject>

@optional
- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1;
@end
