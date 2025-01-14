//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol RedEyeInspector3;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair3 : NSObject
{
    id <RedEyeInspector3> inspector;	// 8 = 0x8
    CDStruct_c3faddef fullBitmap;	// 16 = 0x10
    CDStruct_5973fb4f subRectangle;	// 56 = 0x38
    CDStruct_7286a259 FC;	// 72 = 0x48
    NSArray *faceArray;	// 448 = 0x1c0
    CDStruct_c3faddef faceBitmap;	// 456 = 0x1c8
    CDStruct_242bf05f S;	// 496 = 0x1f0
    struct {
        int width;
        int height;
        struct CGAffineTransform T;
        struct CGAffineTransform Tp;
        CDStruct_c3faddef O;
        CDStruct_c3faddef OO;
        _Bool computeEyePolygon;
        CDStruct_c3faddef EP;
        _Bool maskRender;
        CDStruct_c3faddef D;
        _Bool computeGradient;
        CDStruct_c3faddef G;
        CDStruct_c3faddef M;
        _Bool computeShine;
        CDStruct_c3faddef S;
        CDStruct_c3faddef P;
    } PB;	// 680 = 0x2a8
    CDStruct_ea27cb70 G;	// 1136 = 0x470
    CDStruct_3882bc9d M;	// 1216 = 0x4c0
    CDStruct_fc6961d5 FS;	// 1240 = 0x4d8
    int printFaceArrayLevel;	// 1256 = 0x4e8
    struct CGRect ROIRect;	// 1264 = 0x4f0
    float avgLuminance;	// 1296 = 0x510
    float minLuminance;	// 1300 = 0x514
    float maxLuminance;	// 1304 = 0x518
    float skinval;	// 1308 = 0x51c
    int ioffx;	// 1312 = 0x520
    int ioffy;	// 1316 = 0x524
    int erError;	// 1320 = 0x528
    NSMutableArray *repairs;	// 1328 = 0x530
    CDStruct_5973fb4f repairRect;	// 1336 = 0x538
    CDStruct_c3faddef repairMap;	// 1352 = 0x548
    NSMutableArray *failureCauses;	// 1392 = 0x570
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;	// IMP=0x00600000001ceb01
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00600000001ce9c5
+ (CDStruct_242bf05f)settingsWithOptions:(id)arg1;	// IMP=0x00600000001ca2b3
+ (int)faceContext:(CDStruct_7286a259 *)arg1 withFaceArray:(id)arg2 index:(int)arg3 settings:(CDStruct_242bf05f *)arg4;	// IMP=0x00600000001ca075
+ (int)bitmapRect:(CDStruct_a734b2e2 *)arg1 point:(struct CGPoint *)arg2 polygon:(struct CGPoint [8])arg3 andDistMatrix:(float [4])arg4 forEye:(int)arg5 inFaceDictionary:(id)arg6 settings:(CDStruct_242bf05f *)arg7;	// IMP=0x00600000001c9555
+ (float)yawAngleWithFaceDictionary:(id)arg1;	// IMP=0x00600000001c91ea
+ (CDStruct_a734b2e2)bitmapRectWithImageSubRectangle:(struct CGRect)arg1 settings:(CDStruct_242bf05f *)arg2;	// IMP=0x00600000001c9184
+ (void)insertIntoThreadHopper:(CDStruct_b443dc70 *)arg1 index:(int)arg2 recChannel:(float)arg3 hue:(float)arg4 saturation:(float)arg5 luminance:(float)arg6 shapeMetricTotal:(float)arg7 xPosition:(float)arg8;	// IMP=0x006000000024a771
+ (void)insertIntoConnectionHopper:(CDStruct_ccbddcce *)arg1 index1:(int)arg2 drop1:(int)arg3 index2:(int)arg4 drop2:(int)arg5 score:(float)arg6;	// IMP=0x0060000000246124
- (void)executeRepair:(id)arg1;	// IMP=0x00000000001d0c42
- (id)stringWithRER3Error:(int)arg1;	// IMP=0x00000000001d0c03
- (id)repairArray;	// IMP=0x00000000001d0be2
- (int)transformRepairArray:(struct CGAffineTransform)arg1;	// IMP=0x00000000001d0979
- (void)transformConvexHull:(CDStruct_d01ad076 *)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x00000000001d08e9
- (void)transformGlobalsWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000001d03cb
- (struct CGPoint)leftHandedTransform:(struct CGAffineTransform)arg1 ofPoint:(struct CGPoint)arg2;	// IMP=0x00000000001d034c
- (id)mutableCopyOfArray:(id)arg1;	// IMP=0x00000000001d0235
- (id)repairWithSide:(int)arg1;	// IMP=0x00000000001d0067
- (void)autoRepairWithFaceArray:(id)arg1;	// IMP=0x00000000001cf71c
- (void)printFaceArray;	// IMP=0x00000000001ceec6
- (struct CGAffineTransform)inverseImageTransformForOrientation:(int)arg1;	// IMP=0x00000000001cece1
- (void)dealloc;	// IMP=0x00000000001ce950
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;	// IMP=0x00000000001ce7e1
- (_Bool)openRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x00000000001ce626
- (_Bool)unpackToGlobalRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x00000000001cd570
- (int)packGlobalRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x00000000001cc4d6
- (int)saveRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x00000000001cb42f
- (id)dictionaryRectArrayWithGlobalBitmapRect:(CDStruct_a734b2e2)arg1;	// IMP=0x00000000001cb30c
- (id)dictionaryRectArrayWithBitmapRect:(CDStruct_a734b2e2)arg1;	// IMP=0x00000000001cb1d6
- (CDStruct_a734b2e2)globalBitmapRectWithDictionaryRectArray:(id)arg1;	// IMP=0x00000000001cb0c9
- (CDStruct_a734b2e2)bitmapRectWithDictionaryRectArray:(id)arg1;	// IMP=0x00000000001caf9c
- (id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint)arg1;	// IMP=0x00000000001caee7
- (id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint)arg1;	// IMP=0x00000000001cae0f
- (id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint)arg1;	// IMP=0x00000000001cad18
- (struct CGPoint)dictionaryPointWithGlobalBitmapPoint:(struct CGPoint)arg1;	// IMP=0x00000000001cace6
- (struct CGPoint)dictionaryPointWithBitmapPoint:(struct CGPoint)arg1;	// IMP=0x00000000001cac8b
- (struct CGPoint)globalBitmapPointWithDictionaryPointArray:(id)arg1;	// IMP=0x00000000001cabff
- (struct CGPoint)bitmapPointWithDictionaryPointArray:(id)arg1;	// IMP=0x00000000001cab52
- (struct CGPoint)globalBitmapPointWithDictionaryPoint:(struct CGPoint)arg1;	// IMP=0x00000000001cab13
- (struct CGPoint)bitmapPointWithDictionaryPoint:(struct CGPoint)arg1;	// IMP=0x00000000001caac4
- (CDStruct_a734b2e2)repairRect;	// IMP=0x00000000001caab0
- (CDStruct_c3faddef *)repairMap;	// IMP=0x00000000001caaa3
- (void)repairExternalBuffer;	// IMP=0x00000000001ca813
- (int)updateWithFaceIndex:(int)arg1;	// IMP=0x00000000001ca758
- (void)setInspector:(id)arg1;	// IMP=0x00000000001c917a
- (_Bool)isBlurryWithFocusStats:(CDStruct_fc6961d5)arg1;	// IMP=0x0000000000250371
- (CDStruct_fc6961d5)focusStatsWithBitmap:(CDStruct_c3faddef *)arg1 IOD:(float)arg2;	// IMP=0x000000000025005d
- (_Bool)gatherFaceStatistics:(CDStruct_3882bc9d *)arg1;	// IMP=0x000000000024fd3f
- (int)executeRepairWithRepairDictionary:(id)arg1;	// IMP=0x000000000024fa47
- (int)repairDictionary:(id *)arg1 withEyeIndex:(int)arg2;	// IMP=0x000000000024f731
- (int)prepareMasksWithConvexHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x000000000024dfc6
- (double)next12BitRandom;	// IMP=0x000000000024df9f
- (void)start12BitRandom:(int)arg1;	// IMP=0x000000000024df93
- (int)prepareBitmapsWithString:(char *)arg1;	// IMP=0x000000000024ceee
- (int)renderEyePolygonToBitmap:(CDStruct_c3faddef *)arg1;	// IMP=0x000000000024cc53
- (int)prepareTransformWithEyeIndex:(int)arg1;	// IMP=0x000000000024c92b
- (int)prominenceConvexHull:(CDStruct_183601bc **)arg1 facts:(CDStruct_73443751 *)arg2;	// IMP=0x000000000024b7b2
- (CDStruct_818bb265)RGBtoHSV:(CDStruct_818bb265)arg1;	// IMP=0x000000000024b607
- (int)recognizeThreadsWinningThreadIndex:(int *)arg1 info:(CDStruct_818bb265 *)arg2;	// IMP=0x000000000024a992
- (void)swapHopperElement:(CDStruct_c952897d *)arg1 withElement:(CDStruct_c952897d *)arg2;	// IMP=0x000000000024a8d6
- (_Bool)hopperElement:(CDStruct_c952897d *)arg1 isMoreScleraThanElement:(CDStruct_c952897d *)arg2;	// IMP=0x000000000024a85c
- (int)color:(CDStruct_818bb265 *)arg1 underConvexHull:(CDStruct_d01ad076 *)arg2 saturated:(CDStruct_818bb265 *)arg3;	// IMP=0x000000000024a4bd
- (float)threadSignedArea:(CDStruct_ed92ceb9 *)arg1 centroid:(struct CGPoint)arg2;	// IMP=0x000000000024a3e4
- (struct CGPoint)threadCentroid:(CDStruct_ed92ceb9 *)arg1;	// IMP=0x000000000024a35e
- (int)attemptClosureOfThreadIndex:(int)arg1;	// IMP=0x0000000000249d27
- (int)closeThreadIndex:(int)arg1 usingVectorField:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000002499d5
- (int)shape:(CDStruct_183601bc **)arg1 withThreadAtIndex:(int)arg2 centroid:(struct CGPoint)arg3;	// IMP=0x00000000002496a1
- (int)improvedShape:(CDStruct_183601bc **)arg1 withShape:(CDStruct_892ad059 *)arg2;	// IMP=0x0000000000248e26
- (int)newShape:(CDStruct_183601bc **)arg1 byInterpolatingBetweenCheckpoints:(CDStruct_e958be04 [100])arg2 nc:(int)arg3 usingVectorField:(CDStruct_c3faddef *)arg4;	// IMP=0x00000000002486b8
- (int)updatedCheckpoint:(struct CGPoint *)arg1 withCheckpoint:(struct CGPoint)arg2 checkpointIndex:(int)arg3 angle:(float)arg4 width:(int)arg5 height:(int)arg6 inChannel:(CDStruct_c3faddef *)arg7 threadIndex:(int)arg8 returningEdgeWidth:(float *)arg9;	// IMP=0x00000000002478aa
- (void)slidingWindowAnalysisOfShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_04c5c26d *)arg2;	// IMP=0x0000000000247686
- (void)removeSpikesFromShape:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000002473dd
- (void)removeSmallBumpsFromShape:(CDStruct_892ad059 *)arg1 center:(struct CGPoint)arg2 threshold:(float)arg3;	// IMP=0x000000000024700e
- (void)computeLengthsAnglesAndDeltaAnglesForShape:(CDStruct_892ad059 *)arg1;	// IMP=0x0000000000246eb6
- (void)removeRedundantPointsFromShape:(CDStruct_892ad059 *)arg1 closerThan:(float)arg2;	// IMP=0x0000000000246dd3
- (void)termBitmaps;	// IMP=0x0000000000246d01
- (void)initBitmaps;	// IMP=0x0000000000246cb2
- (int)connectThreadsInGrid;	// IMP=0x0000000000246648
- (int)findThreadsInGrid;	// IMP=0x0000000000246519
- (int)gatherThreadInfo:(CDStruct_ed92ceb9 *)arg1;	// IMP=0x000000000024638d
- (void)printThreadsOnlyClosed:(_Bool)arg1 message:(char *)arg2;	// IMP=0x00000000002462f3
- (void)printThreadWithIndex:(int)arg1;	// IMP=0x0000000000246240
- (void)printConnectionHopper:(CDStruct_ccbddcce *)arg1 message:(char *)arg2;	// IMP=0x00000000002461cd
- (_Bool)edgePoint:(struct CGPoint *)arg1 withBitmap:(CDStruct_c3faddef *)arg2 center:(struct CGPoint)arg3 perp:(struct CGPoint)arg4;	// IMP=0x0000000000245af0
- (int)analyzeMask:(CDStruct_c3faddef *)arg1 usingConvexHull:(CDStruct_d01ad076 *)arg2 producingOptimizedMask:(CDStruct_c3faddef *)arg3;	// IMP=0x0000000000244dd2
- (struct CGPoint)centroidWithConvexHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x0000000000244ca4
- (int)renderConvexHull:(CDStruct_d01ad076 *)arg1 distance:(float)arg2 fieldToBitmap:(CDStruct_c3faddef *)arg3;	// IMP=0x0000000000244439
- (int)widenedHull:(CDStruct_183601bc **)arg1 withHull:(CDStruct_d01ad076 *)arg2 by:(float)arg3;	// IMP=0x00000000002440de
- (int)renderHull:(CDStruct_d01ad076 *)arg1 toBitmap:(CDStruct_c3faddef *)arg2;	// IMP=0x0000000000243e72
- (void)measureHull:(CDStruct_d01ad076 *)arg1 majorAxis:(struct CGPoint *)arg2 majorTo:(struct CGPoint *)arg3 majorDiameter:(float *)arg4 minorAxis:(struct CGPoint *)arg5 minorTo:(struct CGPoint *)arg6 minorDiameter:(float *)arg7;	// IMP=0x0000000000243b3d
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 shape:(CDStruct_892ad059 *)arg3;	// IMP=0x0000000000243a25
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 threadIndex:(int)arg3;	// IMP=0x0000000000243878
- (_Bool)isConvex:(CDStruct_d01ad076 *)arg1;	// IMP=0x000000000024373f
- (_Bool)trimStartPointFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000002436a3
- (_Bool)trimEndPointFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x0000000000243625
- (_Bool)trimConcaveFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x000000000024358f
- (int)addPoint:(struct CGPoint)arg1 toHull:(CDStruct_d01ad076 *)arg2;	// IMP=0x00000000002434e5
- (void)termHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000002434c5
- (int)initHull:(CDStruct_183601bc **)arg1 withOrientation:(_Bool)arg2;	// IMP=0x000000000024343c
- (void)regressionWithPointIndex:(int)arg1;	// IMP=0x00000000002431a8
- (int)nextPointIndexWithPointIndex:(int)arg1;	// IMP=0x0000000000243006
- (int)copyGridInto:(CDStruct_ea27cb70 *)arg1 transform:(struct CGAffineTransform)arg2 height:(int)arg3;	// IMP=0x0000000000242bb6
- (int)linkUpPointIndex:(int)arg1 toPointIndex:(int)arg2;	// IMP=0x0000000000242af8
- (int)replacePointAndDirection:(int)arg1;	// IMP=0x0000000000242a1a
- (void)forAllGridThreadsNear:(struct CGPoint)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x000000000024288c
- (void)forAllGridPointsNear:(int)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x00000000002426e6
- (int)lookForPoint:(struct CGPoint *)arg1 onLine:(CDStruct_12b04d25)arg2 nearestPoint:(struct CGPoint)arg3;	// IMP=0x0000000000242605
- (void)removeThreadAtIndex:(int)arg1;	// IMP=0x0000000000242522
- (void)putThreadAtIndex:(int)arg1;	// IMP=0x000000000024245d
- (int)connectThreads:(int)arg1 drop1:(int)arg2 and:(int)arg3 drop2:(int)arg4;	// IMP=0x0000000000242347
- (int)newShape:(CDStruct_183601bc **)arg1;	// IMP=0x000000000024229d
- (int)newThread:(CDStruct_183601bc **)arg1;	// IMP=0x00000000002421ea
- (int)insertPoint:(struct CGPoint)arg1 andDirection:(struct CGPoint)arg2 intoGrid:(_Bool)arg3;	// IMP=0x0000000000242034
- (void)point:(struct CGPoint)arg1 toGridRow:(int *)arg2 column:(int *)arg3;	// IMP=0x0000000000241f93
- (void)termGrid;	// IMP=0x0000000000241ef4
- (_Bool)initGridWithBitmap:(CDStruct_c3faddef *)arg1 scale:(int)arg2;	// IMP=0x0000000000241cb8
- (int)copyShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_892ad059 *)arg2 transform:(struct CGAffineTransform)arg3 height:(int)arg4;	// IMP=0x0000000000241bd3
- (void)termShapePoints:(CDStruct_892ad059 *)arg1;	// IMP=0x0000000000241bb4
- (int)addPoint:(struct CGPoint)arg1 toShapePoints:(CDStruct_892ad059 *)arg2;	// IMP=0x0000000000241b73
- (int)initShapePoints:(CDStruct_892ad059 *)arg1 withMaxPoints:(int)arg2;	// IMP=0x0000000000241b2b
- (void)condenseFourChannelRecognitionMap:(CDStruct_c3faddef *)arg1 intoOneChanneMap:(CDStruct_c3faddef *)arg2;	// IMP=0x0000000000241ab4
- (void)magnitudeMap:(CDStruct_c3faddef *)arg1 fromGabor:(CDStruct_c3faddef *)arg2;	// IMP=0x0000000000241a34

@end

