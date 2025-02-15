//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface Image_Estimator_HEIFInput : NSObject
{
    double _Input_File_Size;	// 8 = 0x8
    double _Input_Height;	// 16 = 0x10
    double _Input_Entropy;	// 24 = 0x18
    double _Aspect_Ratio;	// 32 = 0x20
    double _Target_File_Size;	// 40 = 0x28
    long long _Target_Max_Dimension_4032;	// 48 = 0x30
    long long _Target_Max_Dimension_3000;	// 56 = 0x38
    long long _Target_Max_Dimension_2048;	// 64 = 0x40
    long long _Target_Max_Dimension_1600;	// 72 = 0x48
    long long _Target_Max_Dimension_1280;	// 80 = 0x50
    long long _Target_Max_Dimension_1024;	// 88 = 0x58
    long long _Target_Max_Dimension_800;	// 96 = 0x60
    double _Compression_Ratio;	// 104 = 0x68
    double _Input_H_x_W__NumOfPixels_;	// 112 = 0x70
    double _Target_Height;	// 120 = 0x78
    double _Target_Width;	// 128 = 0x80
    double _Input_log_NumOfPixels_;	// 136 = 0x88
    double _Ratio_of_NumOfPixels;	// 144 = 0x90
    double _Exponential_Entropy;	// 152 = 0x98
}

@property(nonatomic) double Exponential_Entropy; // @synthesize Exponential_Entropy=_Exponential_Entropy;
@property(nonatomic) double Ratio_of_NumOfPixels; // @synthesize Ratio_of_NumOfPixels=_Ratio_of_NumOfPixels;
@property(nonatomic) double Input_log_NumOfPixels_; // @synthesize Input_log_NumOfPixels_=_Input_log_NumOfPixels_;
@property(nonatomic) double Target_Width; // @synthesize Target_Width=_Target_Width;
@property(nonatomic) double Target_Height; // @synthesize Target_Height=_Target_Height;
@property(nonatomic) double Input_H_x_W__NumOfPixels_; // @synthesize Input_H_x_W__NumOfPixels_=_Input_H_x_W__NumOfPixels_;
@property(nonatomic) double Compression_Ratio; // @synthesize Compression_Ratio=_Compression_Ratio;
@property(nonatomic) long long Target_Max_Dimension_800; // @synthesize Target_Max_Dimension_800=_Target_Max_Dimension_800;
@property(nonatomic) long long Target_Max_Dimension_1024; // @synthesize Target_Max_Dimension_1024=_Target_Max_Dimension_1024;
@property(nonatomic) long long Target_Max_Dimension_1280; // @synthesize Target_Max_Dimension_1280=_Target_Max_Dimension_1280;
@property(nonatomic) long long Target_Max_Dimension_1600; // @synthesize Target_Max_Dimension_1600=_Target_Max_Dimension_1600;
@property(nonatomic) long long Target_Max_Dimension_2048; // @synthesize Target_Max_Dimension_2048=_Target_Max_Dimension_2048;
@property(nonatomic) long long Target_Max_Dimension_3000; // @synthesize Target_Max_Dimension_3000=_Target_Max_Dimension_3000;
@property(nonatomic) long long Target_Max_Dimension_4032; // @synthesize Target_Max_Dimension_4032=_Target_Max_Dimension_4032;
@property(nonatomic) double Target_File_Size; // @synthesize Target_File_Size=_Target_File_Size;
@property(nonatomic) double Aspect_Ratio; // @synthesize Aspect_Ratio=_Aspect_Ratio;
@property(nonatomic) double Input_Entropy; // @synthesize Input_Entropy=_Input_Entropy;
@property(nonatomic) double Input_Height; // @synthesize Input_Height=_Input_Height;
@property(nonatomic) double Input_File_Size; // @synthesize Input_File_Size=_Input_File_Size;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000211d6
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput_File_Size:(double)arg1 Input_Height:(double)arg2 Input_Entropy:(double)arg3 Aspect_Ratio:(double)arg4 Target_File_Size:(double)arg5 Target_Max_Dimension_4032:(long long)arg6 Target_Max_Dimension_3000:(long long)arg7 Target_Max_Dimension_2048:(long long)arg8 Target_Max_Dimension_1600:(long long)arg9 Target_Max_Dimension_1280:(long long)arg10 Target_Max_Dimension_1024:(long long)arg11 Target_Max_Dimension_800:(long long)arg12 Compression_Ratio:(double)arg13 Input_H_x_W__NumOfPixels_:(double)arg14 Target_Height:(double)arg15 Target_Width:(double)arg16 Input_log_NumOfPixels_:(double)arg17 Ratio_of_NumOfPixels:(double)arg18 Exponential_Entropy:(double)arg19;	// IMP=0x0000000000021090

@end

