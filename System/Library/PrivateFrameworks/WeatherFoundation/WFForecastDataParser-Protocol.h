//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSData, NSDate, NSLocale, NSString, WFAQIScale, WFLocation, WFParsedForecastData, WFResponseParsingRules;

@protocol WFForecastDataParser <NSObject>
- (WFAQIScale *)parseAQIScaleNamed:(NSString *)arg1 data:(NSData *)arg2 error:(id *)arg3;
- (WFParsedForecastData *)parseForecastData:(NSData *)arg1 types:(unsigned long long)arg2 location:(WFLocation *)arg3 units:(int)arg4 locale:(NSLocale *)arg5 date:(NSDate *)arg6 error:(id *)arg7 rules:(WFResponseParsingRules *)arg8;
- (WFParsedForecastData *)parseForecastData:(NSData *)arg1 types:(unsigned long long)arg2 location:(WFLocation *)arg3 locale:(NSLocale *)arg4 date:(NSDate *)arg5 error:(id *)arg6 rules:(WFResponseParsingRules *)arg7;
- (WFParsedForecastData *)parseForecastData:(NSData *)arg1 types:(unsigned long long)arg2 location:(WFLocation *)arg3 locale:(NSLocale *)arg4 date:(NSDate *)arg5 error:(id *)arg6;
@end

