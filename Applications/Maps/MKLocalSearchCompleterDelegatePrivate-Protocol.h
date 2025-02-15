//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKLocalSearchCompleterDelegate-Protocol.h"

@class MKLocalSearchCompleter, NSArray, NSError, NSString;
@protocol GEOMapServiceCompletionTicket;

@protocol MKLocalSearchCompleterDelegatePrivate <MKLocalSearchCompleterDelegate>

@optional
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<GEOMapServiceCompletionTicket>",?,&,N

- (void)completerDidAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerWillAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2 forQueryFragment:(NSString *)arg3;
- (void)completerDidFail:(MKLocalSearchCompleter *)arg1 error:(NSError *)arg2;
- (void)completer:(MKLocalSearchCompleter *)arg1 didUpdateResultsWithSections:(NSArray *)arg2 forQueryFragment:(NSString *)arg3;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1 finished:(_Bool)arg2;
- (void)completerWillUpdateResults:(MKLocalSearchCompleter *)arg1;
@end

