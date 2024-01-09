package org.tensorflow.lite;


public class TFLiteRegistrar {

    // 本地方法声明
    public static native long addByteSplit(long resolver);

    public static native long addByteSplitByOffsets(long resolver);

    public static native long addFastBertNormalize(long resolverPtr);

    public static native long addFastSentencepieceDetokenize(long resolver);

    public static native long addFastSentencepieceTokenize(long resolver);

    public static native long addFastWordpieceTokenize(long resolver);

    public static native long addFastWordpieceDetokenize(long resolver);

    public static native long addNgramsStringJoin(long resolver);

    public static native long addRaggedTensorToTensor(long resolver);

    public static native long addSentenceFragmenterV2(long resolver);

    public static native long addWhitespaceTokenize(long resolver);

    // ... 其他方法声明

    public static native long getAddByteSplitPointer();

    public static native long getAddByteSplitByOffsetsPointer();

    public static native long getAddFastBertNormalizePointer();

    public static native long getAddFastSentencepieceDetokenizePointer();

    public static native long getAddFastSentencepieceTokenizePointer();

    public static native long getAddFastWordpieceTokenizePointer();

    public static native long getAddFastWordpieceDetokenizePointer();

    public static native long getAddNgramsStringJoinPointer();

    public static native long getAddRaggedTensorToTensorPointer();

    public static native long getAddSentenceFragmenterV2Pointer();

    public static native long getAddWhitespaceTokenizePointer();
}
